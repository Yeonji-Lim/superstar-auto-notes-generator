# TODO LIST

## Step Placement
- [ ] extract_features 구조 파악
- [ ] librosa 이해하기
- [ ] generate level 부분 분석

## Step Placement(Time)
- [ ] 원본 오디오 파일이 변환되는 과정 확인
- [ ] 세부 파라미터들이 의미하는 것을 파악(이론적)
- [ ] 왜 이러한 Time이 찍혔는지 이해

## Step Selection
- [x] Transformer(stage2 model) 이해
- [x] Teacher Forcing : 어떤 정답값을 주고 있는지 파악 -> 인코더와 같은 정답 값을 가지고 있음
- [ ] Transformer의 용도
- [ ] Step Placement의 결과물 사용처
- [ ] 기존의 경우 y좌표가 4개가 아닌 3개만을 생성함(LineLayer) 4개 생성으로 변경 후 비교
- [ ] 노트 위치 선정 기준
- [x] 멀티 노트 시점 선정 기준 -> states_grid(==grid_state)의 원소(tuple)이 값을 두개 가지고 있는 경우(12개의 값인 것을 보아 음계일 듯함)
- [ ] 긴 노트를 둘 시점 선정
- [ ] 난이도에 따른 차이

## SuperStar Resource
- [ ] 노트 데이터 형식
- [ ] 난이도에 따른 차이
- [ ] 노트를 찍는 기준, 스타일

