# LSTM

RNN (Recurrent neural network) : 스스로를 반복하면서 이전 단계에서 얻은 정보가 지속되도록 하는 모델

LSTM (Long Short-Term Memory Network)은 RNN의 일종

RNN은 짧은 기간에 의존하는 반면, LSTM은 긴 기간에 의존한다. 

다음 데이터를 예측할 때 가까운 지난 정보를 참조할 때 RNN을 사용할 수 있지만 더 많은 지난 데이터들을 필요로 할 때, 시간 격차가 커지게 된다.

이 격차가 늘어날 수록 RNN으로는 학습하는 정보를 계속 이어나가기 힘들다. 

긴 의존 기간의 문제를 피하기 위해 LSTM은 명시적으로 설계되었다. 

RNN은 그 반복 모듈의 구조가 단순하다. tanh layer 한 층 만을 가지고 있다.

LSTM은 다른 구조를 가지고 있다. 단순히 neural network layer 한층이 아니라 4개의 layer가 특별한 방식으로 서로 정보를 주고 받는다.

