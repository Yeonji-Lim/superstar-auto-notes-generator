# ddc 논문 리뷰
https://kakalabblog.wordpress.com/2017/06/07/dance-dance-convolution/ 

# step placement
1. 모든 모델의 output은 single sigmoid unit 이다. 이 구간이 step인지 아닌지를 판별한다. 
2. 난이도를 구분짓기 위해서 audio feautres에 one-hot representation을 더했다.
    ## one-hot encoding
    표현하고 싶은 부분의 인덱스에 1의 값을 부여하고, 나머지에는 0을 부여하는 벡터의 표현 방식    
    -> 여기서는 난이도를 정하는 건데 저 one-hot 처리된 벡터를 찾아봐야 될듯

3. cnn architecture 사용(conv 3*3*10 와 conv 7*3*3 을 convolution) 
    ## cnn for onset detection 
    ㄴ onset detection: 오디오 신호에서 음악 이벤트를 자동으로 감지하는 것은 음악 정보 검색에서 가장 기본적인 작업 중 하나이다. 여기서는 소리의 과도 부분 시작을 표시하는 순간 또는 과도 부분을 신뢰성 있게 탐지할 수 있는 가장 이른 순간을 검출하는 방법    
    -> 음악에서 드라마틱한 순간을 찾는 cnn 모델
    
    - spectrogram에 대한 CNN    
    ㄴ spectrogram: 소리나 파동을 시각화하여 파악하기 위한 도구

    - 원래 computer vision 쪽에서는 square한 filter를 주로 쓰지만,  우리는 changes over time을 detect해야 하니까 rectangular한 filter를 쓴다.(wide in time / narrow in frequency)

    - 그리고 high time resolution의 결과물을 필요로 하니까 frequency에서만 max-pooling을 실행한다.    
    ㄴ max pooling: 정해진 크기 안에서 가장 큰 값만 뽑아내는 것    

    - 여러개의 window size로 얻은 spectrogram을(frame rate(초당 화면으로 출력되는 프레임 개수), 즉 hop size는 같음) 쌓은 데이터에 대해 CNN을 적용한다. 
    이때 logarithmic filter bank의 갯수와 같은 수의 frequency bank로 줄인다. => 각 뉴런은 해당 위치에서의 high temporal accuracy의 정보와 high frequency accuracy의 정보를 합치게 된다.

    - 테스트할 때는 트레이닝 때처럼 사이즈를 나눌 필요 없이, 전체 곡을 그대로 input으로 넣어준다. ->  onset activation over time을 얻는다. => 이 function은 5 frame의 Hamming window를 사용한 convolution으로 smoothing되고, 특정 threshold보다 큰 local maxima 값들이 onset으로 표기된다(1로 표기된다, 즉 step 이 찍힌다).

    ㄴ hamming window: 울타리 오차, 누설오차를 막기 위한 window   
    ㄴ smoothing: 영상을 흐리게 하거나 노이즈를 제거

    ## c-lstm 모델




