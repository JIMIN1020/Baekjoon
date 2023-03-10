## [1546] 평균
https://www.acmicpc.net/problem/1546

### ✔️ 문제
세준이는 기말고사를 망쳤다. 세준이는 점수를 조작해서 집에 가져가기로 했다. 일단 세준이는 자기 점수 중에 최댓값을 골랐다. 이 값을 M이라고 한다. 그리고 나서 모든 점수를 점수/M*100으로 고쳤다.

예를 들어, 세준이의 최고점이 70이고, 수학점수가 50이었으면 수학점수는 50/70*100이 되어 71.43점이 된다.

세준이의 성적을 위의 방법대로 새로 계산했을 때, 새로운 평균을 구하는 프로그램을 작성하시오.

### ✔️ 입력
첫째 줄에 시험 본 과목의 개수 N이 주어진다. 이 값은 1000보다 작거나 같다. 둘째 줄에 세준이의 현재 성적이 주어진다. 이 값은 100보다 작거나 같은 음이 아닌 정수이고, 적어도 하나의 값은 0보다 크다.

### ✔️ 출력
첫째 줄에 새로운 평균을 출력한다. 실제 정답과 출력값의 절대오차 또는 상대오차가 10의 -2승 이하이면 정답이다.

### ✔️ 풀이
N개의 점수를 배열에 받은 후 result 변수에 누적합을 만들고 최댓값 M을 찾음.

새로운 평균 = (점수 1 / M * 100) + (점수 2 / M * 100) + …. + (점수 n / M * 100) / N = (점수 1 + 점수 2 + … + 점수 n) / M * 100 / N

따라서 점수를 모두 합한 누적합을 최댓값 M으로 나누고 100을 곱해준 후, 점수의 개수인 N으로 나누면 새로운 평균을 구할 수 있음.