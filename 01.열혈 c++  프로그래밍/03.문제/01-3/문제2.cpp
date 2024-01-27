#문제2: 다음과 같은 형태로의 함수 오버로딩은 문제가 있다. 어떠한 문제가 있는지 설명한다.

int SimpleFunc(int a=10) {
  return a + 1;
}

int SimpleFunc(void) {
  return 10;
}
-------------------------------

SimpleFunc(); 로 함수를 호출 했을 때, 오버로딩 된 SimpleFunc함수 중 어떤 함수가 호출이 될 지 애매한 상황이 발생한다. 
  즉, 둘다 호출이 가능한 문제가 발생한다. 
