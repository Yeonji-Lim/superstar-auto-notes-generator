from email.policy import default
from .base_options import BaseOptions


class TrainOptions(BaseOptions):

    def __init__(self):
        super(TrainOptions, self).__init__()
        parser = self.parser
        # parser.add_argument('--print_freq', type=int, default=100, help='frequency of showing training results on console')
        # parser.add_argument('--update_html_freq', type=int, default=100, help='frequency of showing training results on console')
        # parser.add_argument('--display_freq', type=int, default=100, help='frequency of showing training results on console')
        # parser.add_argument('--val_epoch_freq', type=int, default=10, help="epoch interval between rounds of evaluation on the validation set [-1 prevents validation] ")
        # parser.add_argument('--val_batch_size', default=1, type=int)
        # parser.add_argument('--save_latest_freq', type=int, default=5000, help='frequency of saving the latest results')
        # parser.add_argument('--save_epoch_freq', type=int, default=50, help='frequency of saving checkpoints at the end of epochs')
        # parser.add_argument('--save_by_iter', action='store_true', help='whether saves model by iteration')
        # parser.add_argument('--continue_train', action='store_true', help='continue training: load the latest model')
        # parser.add_argument('--epoch_count', type=int, default=1, help='the starting epoch count, we save the model by <epoch_count>, <epoch_count>+<save_latest_freq>, ...')
        # parser.add_argument('--phase', type=str, default='train', help='train, val, test, etc')
        # parser.add_argument('--nepoch', type=int, default=100, help='# of epochs at starting learning rate')
        # parser.add_argument('--nepoch_decay', type=int, default=100, help='# of epochs to linearly decay learning rate to zero')
        # parser.add_argument('--beta1', type=float, default=0.5, help='momentum term of adam')
        # parser.add_argument('--lr', type=float, default=0.0002, help='initial learning rate for adam')
        # parser.add_argument('--no_html', action='store_true', help='do not save intermediate training results to [opt.checkpoints_dir]/[opt.name]/web/')
        # parser.add_argument('--lr_policy', type=str, default='lambda', help='learning rate policy: lambda|step|plateau|cosine')
        # parser.add_argument('--lr_decay_iters', type=int, default=50, help='multiply by a gamma every lr_decay_iters iterations')

        parser.add_argument('--print_freq', type=int, default=10, help='frequency of showing training results on console')
        parser.add_argument('--update_html_freq', type=int, default=100, help='frequency of showing training results on console')
        parser.add_argument('--display_freq', type=int, default=100, help='frequency of showing training results on console')
        parser.add_argument('--val_epoch_freq', type=int, default=0, help="epoch interval between rounds of evaluation on the validation set [-1 prevents validation] ")
        parser.add_argument('--val_batch_size', default=1, type=int)
        parser.add_argument('--save_latest_freq', type=int, default=50000, help='frequency of saving the latest results')
        parser.add_argument('--save_epoch_freq', type=int, default=50, help='frequency of saving checkpoints at the end of epochs')
        parser.add_argument('--save_by_iter', action='store_true', default=True, help='whether saves model by iteration')
        parser.add_argument('--continue_train', action='store_true', default=False, help='continue training: load the latest model')
        parser.add_argument('--epoch_count', type=int, default=1, help='the starting epoch count, we save the model by <epoch_count>, <epoch_count>+<save_latest_freq>, ...')
        parser.add_argument('--phase', type=str, default='train', help='train, val, test, etc')
        parser.add_argument('--nepoch', type=int, default=500, help='# of epochs at starting learning rate')
        parser.add_argument('--nepoch_decay', type=int, default=500, help='# of epochs to linearly decay learning rate to zero')
        parser.add_argument('--beta1', type=float, default=0.5, help='momentum term of adam')
        parser.add_argument('--lr', type=float, default=0.0002, help='initial learning rate for adam')
        parser.add_argument('--no_html', action='store_true', help='do not save intermediate training results to [opt.checkpoints_dir]/[opt.name]/web/')
        parser.add_argument('--lr_policy', type=str, default='lambda', help='learning rate policy: lambda|step|plateau|cosine')
        parser.add_argument('--lr_decay_iters', type=int, default=50, help='multiply by a gamma every lr_decay_iters iterations')

        # parser.add_argument('--data_dir', type=str, default='../../data/extracted_data')
        # parser.add_argument('--dataset_name', type=str, default='stage_two')
        # parser.add_argument('--model', type=str, default='transformer')
        # parser.add_argument('--batch_size', type=int, default=2)
        # parser.add_argument('--num_windows', type=int, default=0)
        # parser.add_argument('--experiment_name', type=str, default='block_selection_new')
        # parser.add_argument('--pad_batches', action='store_true', default=True)
        # parser.add_argument('--feature_name', type=str, default='mel')
        # parser.add_argument('--tgt_vocab_size', type=int, default=2003)
        # parser.add_argument('--label_smoothing', action='store_true', default=True)
        # parser.add_argument('--max_token_seq_len', type=int, default=512)
        # parser.add_argument('--gpu_ids', type=list, default=[0,1,2,3,4,5,6,7])
        # parser.add_argument('--level_diff', type=list, default=['Expert','ExpertPlus'])
        # parser.add_argument('--workers', type=int, default=16)
        # parser.add_argument('--reduced_state', action='store_true', default=True)
        # parser.add_argument('--src_vector_input', action='store_true', default=True)
        # parser.add_argument('--load_iter', type=int, default=1600000)

        self.parser = parser
        self.is_train = True
