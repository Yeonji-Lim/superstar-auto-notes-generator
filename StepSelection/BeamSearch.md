# translate_batch
    
    src_seq -> torch.Size([1, 102, 61])
    src_pos -> torch.Size([1, 61])
    src_mask -> torch.Size([1, 61])

    src_enc -> torch.Size([1, 61, 512])

    512는 각 데이터당 임베딩 된 벡터 사이즈

    n_bm == opt.beam_size == 20

    d_h == 512 -> 임베딩 벡터 사이즈
    len_s == 61 -> 곡 길이
    n_inst == 1 -> 배치 내부에 있는 인스턴스 개수 ?

    src_seq -> torch.Size([20, 61, 102]) # n_inst * n_bm, len_s, self.opt.d_src
    src_mask -> torch.Size([20, 61]) # n_inst * n_bm, len_s
    src_enc -> torch.Size([20, 61, 512]) # n_inst * n_bm, len_s, d_h
    
## inst_dec_beams == Beam

    미리 모두 PAD 넣어두고, 문장 처음 마다 BOS 넣어둠

inst_idx_to_position_map (이거 설명있는데 먼 말인지 몰것)

    active instance의 수가 감소하여 src_seq, dec_seq등의 텐서가 인스턴스 번호에 해당하는 차원에서 작아짐 

    텐서의 어떤 인덱스가 원래의 n_inst 인스턴스 중에서 어느 것과 일치하는지 추적 

## Decode

차례로 하나씩 예측

### beam_decode_step

    n_active_list
    dec_seq -> torch.Size([20, 1])
    dec_pos -> torch.Size([20, 1])

    [predic_word]
        dec_output -> torch.Size([20, 1, 512])
                   -> torch.Size([20, 512])
        word_prob  -> torch.Size([20, 2003])
                   -> torch.Size([1, 20, 2003]) # 첫번째 위치에 대한 확률 분포

    [collect_active_inst_idx_list]
        is_inst_complete = inst_beams[inst_idx].advance(word_prob[inst_position],sequence_length)

            [Beam.advance()]
                num_words == 2003

                beam_lk -> torch.Size([2003]) # beam likelihood

                best_score에 가장 큰 20(beam_size)개의 값을 저장 -> 근데 왜 2번하는지 모르겠음

                


