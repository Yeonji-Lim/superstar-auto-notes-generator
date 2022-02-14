# BeamSearch   

조건부 확률에 따라 각 단계에서 입력 시퀀스에 대한 여러개의 대안을 고른다.       

Beam Width B(빔의 넓이) : 대안의 수   

각 단계에서 그 단계에서 가장 선택될 가능성이 높은 확률을 갖는 최고 대안의 수 B를 선택한다.   

예를들어, B의 크기가 3, 단어집 크기가 10,000 이라고 하자.   

### step 1

입력문장이 주어지면 가장 높은 확률을 가진 상위 3개의 단어를 찾음.   
모든 단어집에 softmax 적용 -> 여기서 가능성 가장 높은 3개의 단어 선택해서 메모리에 저장.   
https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2FR4w1u%2FbtqIxYmpD2A%2F7UmIpGNIHuYmKUw6HeRzs1%2Fimg.png 

### step2

첫번째 단어 3개를 두번째 단계로 보낸다. 모든 단어집에 다시 softmax 적용 
첫번째와 두번째 단어에 대한 최고의 3쌍을 찾기 위해 첫번째 단어 중 하나를 가져와 단어집 내 10,000개의 모든 단어에 softmax 적용

-> 총 30,000개의 조합 실행

쌍이 만들어지지 않으면 단어를 drop
https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2FexISv5%2FbtqIAwXxWQw%2FuAI96GRzFn1SRg1C3RSngK%2Fimg.png

### step3
https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2FcQMmWY%2FbtqIKquKsC0%2FbKc3UzrZWh2Zkjvm7YmFg1%2Fimg.png
같은 방식으로 세번째 단어를 찾는다. 이 절차를 계속 반복하면 결국 3개의 문장이 선택된다. 
상위 3개의 문장은 다양한 길이일 수 있다.
여기서 가장 높은 확률을 가진 문장을 디코더 출력으로 선택한다.

https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2Fcpnwb0%2FbtqIzYUhBvg%2Fj5TvQlNeqzEloC9BObnDpK%2Fimg.png 



빔 넓이가 크면 더 정확한 결과가 나오지만 많은 메모리와 컴퓨팅 파워를 사용한다.
