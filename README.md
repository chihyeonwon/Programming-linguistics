# Programming-linguistics
컴퓨터공학과 프로그래밍 언어론 정리입니다.
[BNF](https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=hamill_a&logNo=221125554113)
[4](https://blog.naver.com/PostView.nhn?blogId=bh5kks&logNo=220498445612)
![image](https://github.com/wonchihyeon/Programming-linguistics/assets/58906858/532d1fb1-1f40-4e6c-957d-fd56aa0d6d9b)
![image](https://github.com/wonchihyeon/Programming-linguistics/assets/58906858/be821b10-a10b-407c-aee6-3578397112e9)
```
assign은 변화가능한 variable expression으로 유도가 가능하다.
LHS 정의하려는 추상화 : RHS는 토큰, 어휘항목, 다른 추상화에 대한 참조로 구성

논터미널 기호 혹은 논터미널 : 추상화된 대상
터미널 기호 혹은 터미널 : 규칙에 포함된 어휘항목과 토큰
논터미널 기호는 두 개 이상의 다른 정의를 가질 수 있음

리스트 명세 가변 길이의 리스트를 표현할 때 BNF에서는 재귀를 사용

최좌단 유도 -> 파스트리 -> 파스트리 구축 -> 유도 o 문제 x

문법의 모호성을 제거하는 방법 : 연산자의 우선순위, 연산의 결합 규칙

연산자 우선순위가 있고 없고의 차이가 있다.
연산자 우선순위는 낮은쪽에서부터 계산된다.
낮은 쪽이 먼저 생성되므로 연산자 우선 순위에 따라서 연산을 수행하므로 모호성을 제거한다.
(깊이 우선)

연산의 결합규칙
좌결합규칙: 좌순환적 표현은 좌결합 규칙을 기술한다. RHS의 시작 위치에 LHS가 나타나는 경우
우결합규칙: LHS가 RHS의 오른쪽 끝에 나타나는 경우
좌측의 <factor>가 우측에도 나타난다.<factor>

if then else를 위한 모호하지 않은 문법 else의 위치가 어디에 있을까

Dangling else 문제 if if else < 아무것도 출력이 안된다. 
if else if < 출력

if if else if statment?

BNF보다 서술 능력이 향상된 것은 아니며 단지 가독성과 작성력만 향상

<> 가 있는 건 논 터미널
-> 유도
<program> -> begin <> end -> <>
A = B + C; <- 터미널   

최좌단 유도 논미널 <> -> 터미널로 유도

구조상 파스트리와 같다.
중간 노드는 논터미널
잎 노드는 터미널

문법의 모호성 ? -> 주어진 한 문장에 대해 두 개 이상의 다른 파스트리를 생성할 경우
컴파일러가 의미를 결정할 수 없기 때문에

모호할 경우 해결책 -> 문법의 재작성, 비문법적 정보를 제공하여 하나의 올바른 파스트리를 구성

해결책으로 연산자 우선순위를 도입

낮은 곳이 먼저 계산된다. 우선순위가 높은 것을 파스트리의 최하단에 위치하게 함

if else -> 두 개의 파스트리(모호하다)

else 규칙 : 이전에 매칭되지 않은 가까운 then 에 매칭이 된다.
<match>, <unmatch> 나누어서 작성


yacc 구문 생성기가 parse 구문 분석기를 생성한다.

c,c++ 컴파일러
java 인터프리터

어휘분석과 구문 분석과 분리하는 이유

어휘분석(토큰과 렉심으로 구분) 토큰화 토큰, lexeme가 의미 -> 심볼 쌍을 이룬다.

어휘분석기의 역할 -> 주석제거, 심볼 테이블 구축, 어휘 에러 탐지 및 통보

어휘분석기 -> lex 정규 표현식을 사용한 lex, 패턴을 정의하는 상태 전이도, 상태전이도에 대한 테이블 구동 구현을 직접 구성

유한 오토마타 -> 유향 그래프


```
