## [27159] 노 땡스!
https://www.acmicpc.net/problem/27159

### ✔️ 문제
<img width="525" alt="스크린샷 2023-03-15 오후 3 13 00" src="https://user-images.githubusercontent.com/121474189/225222467-2880ba41-4a7c-45f5-b783-f8f8fda869bb.png">

《노 땡스!》는 3부터 35까지의 정수가 쓰인 수 카드를 이용하여 플레이할 수 있는 보드게임입니다. 수 카드를 경매를 통해서 낙찰받으며, 최종적으로 가지고 있는 수 카드를 이용하여 다음과 같이 점수를 계산합니다.

1. 정수들을 오름차순으로 정렬한 뒤, 이웃한 수끼리의 차가 1인 구간들로 그룹을 나눕니다.
2. 각 그룹별로 가장 작은 수를 모두 합한 값이 점수가 됩니다.

예를 들어 가지고 있는 수 카드가 6, 7, 10, 12, 13, 14, 15, 20, 21, 22라면, [6,7], [10], [12,13,14,15], [20,21,22]의 4개의 그룹으로 나뉘며, 점수는 6+10+12+20=48점입니다.

가지고 있는 수 카드가 주어졌을 때 점수를 계산하는 프로그램을 작성하세요.

<br/>

### ✔️ 입력
첫 번째 줄에 수 카드의 개수 N이 주어집니다.

두 번째 줄에 N개의 카드에 적힌 정수 $xi$가 공백으로 구분되어 **오름차순으로** 주어집니다.

### ✔️ 출력
첫 번째 줄에 문제에서 설명한 규칙에 따라 계산한 점수를 출력합니다.

<br/>

### ✔️ 풀이
모든 수를 배열로 전달받은 후 차례대로 1씩 차이나는지 검사.

arr[i-1]이 arr[i]-1과 같지 않으면, 즉 1 차이가 나지 않으면 arr[i]을 새로운 그룹의 시작 수로 보고 sum에 더함.