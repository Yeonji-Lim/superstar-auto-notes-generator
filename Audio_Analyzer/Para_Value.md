sr = 44,100 / y = 1,342,464
nfft => 1024, 2048, 4096
hop = 441
y / hop(window) =>3044.xxx => 3045
n_mel = 80
features => (80, 3045)
features_size => 80*3045 = 243,600
nfft에 따라서 featuress => ( features(1024), features(2048), features(4096) )
-> features = (80, 3, 3045)
feature 뒤에 zeros concatenate 진행 => padding => (80, 3, 3060)

input windows => (1, 80, 3, 3045)
-time_shifts//2 ~ time_shifts//2+1

input => (1, 15, 80, 3, 3045)
=> N, L, deltaT, dim, winsizes
=> reshape( N(1) * L(3045) , deltaT(15) , dim(80) , winsizes(3) )
3045,15,80,3
3045,20,9,26
3045, 20, 7 ,8
reshape( N(1) , L(3045) , 20*7*8)
(1, 3045, 1120)
lstm => (1, 3045, 512)
logits => (1, 3045, 5)
.cpu().detach().numpy() => 3045
=> find_peaks









