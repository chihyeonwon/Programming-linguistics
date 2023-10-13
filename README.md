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
```
![image](https://github.com/chihyunwon/Programming-linguistics/assets/58906858/77c1ed68-fa4d-47b6-97e1-eed7d43b081c)

```
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

. 의미를 박탈해라 영문자가 여러개 오고 숫자가 오면 id다
스페이스 -> 뛰어넘어라

구문 분석의 목적 (파서의 역할)

파스트리를 구축

하향식-> 위에서 아래로 최좌단 유도와 같은 순서 LL 파서, 재귀 하향 파싱
상향식-> 아래에서 위로 최우단 유도의 역순 LL 파서, 이동-감축 알고리즘 yacc

파싱 알고리즘 복잡도 O(n^3) 소스코드에 비례
상업적 파서의 복잡도를 O(n)으로 줄임

최좌단,우단이던 파스트리는 하나만 생성

하향식 <- 재귀 하향 파싱 , 전역 변수 nextToken 파싱할 때 다음 토큰을 미리본다. LL 문법
좌측에서 1개의 터미널
하향식 <- LL , 재귀

expr term factor ( expr term factor sum expr + expr term factor 47 - 최종적으로 expr 다시

직접 좌순환 <- 재귀호출로 인한 스택오버플로우 발생
간접 좌순환 <- A -> BaA A가 즉시 자신을 호출하는 부분이 발생

하향식 순환을 안쓰는 데에는 이유가 있다.

상향식 순환을 자주 사용한다.

집합쌍 불일치 테스트
nextToken(lookahead)이 하나여야하는데 여러 경우면 안된다. 여러 경우면 RHS를 선택할 수 없다.

A 논터미널 a터미널 first의 집합의(a, b, c, d) 교집합이 공집합이므로(disjoin)하므로
하향식 파싱이 가능하다.

first가 a, a, b 서로 disjoint 하지 않으므로 하향식 파싱이 불가능하다.
```
[스택과 힙](https://blog.naver.com/gothevole/223232263442)
```
스택 : 지역변수, 함수 호출(지역변수,리턴되는 주소, 파라미터), 컴파일러
힙 : 동적으로 할당, 프로그래머가 관리

extern 전역변수 -> Data영역
실행->로더가 프로그램을 올려준다. 메모리 상에 코드부분은 코드부분
데이터는 데이터부분, stack, heap

code, data, stack, heap
os

스택에는 main부터 쌓음
```
![image](https://github.com/chihyunwon/Programming-linguistics/assets/58906858/b62c5f2e-11e9-4ffa-9804-76bed8b281ca)
```
상향식 파싱 최우단 유도의 역순

입력은 shift 토큰 스트림
출력은 발견된 문법 규칙

shift - Reduce 알고리즘

푸시다운 오토마타 문법에대한 인식
모든 파서는 푸시다운 오토마타
재귀 하강 파서도 푸시다운 오토마타

LR 파서의 장점, 단점을 서술하라

LR파서는 상대적으로 작은 파서코드와 파싱테이블로 구성
LR파서는 LL파서로 처리가능한 문법을 모두 처리 가능하다
LR파서는 적은 파서코드로도 LL파서로 처리가능한 문법을 모두 처리 가능하다.

단점 : 파싱테이블을 수작업으로 구축하기가 어렵다.
문법을 입력받아서 파싱테이블을 자동으로 생성하는 Yacc 프로그램이 존재한다.

0id5 스택 0, (id, 5) -> 0,(F,3) -> 0,(T,2)

중간고사 시험

LR 파싱테이블 ACTION이 어떻게 일어날까 
하향식 파서 처리부분
```
## Yacc
```

```
