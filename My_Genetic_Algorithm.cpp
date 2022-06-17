#include <bits/stdc++.h>                                                   // 헤더파일 포함
#define MUT 5                                                              // 돌연변이 확률 0.005%로 조정
using namespace std;                                             

int N;                                                                     // 데이터 수
pair<double, double> data[20];                                             // 데이터 입력받을 pair 배열 (a, b)
pair<double, double> p[4];                                                 // 각 세대에서의 해(염색체) - 한 세대의 해 개수 4개로 설정
double score[4];                                                           // 세대 적합도 판단 배열

double gap(double a, double b, double x)                                   // 회귀 함수의 함숫값 리턴
{
	return a*x+b;
}
void first_gen()                                                           // 초기 세대 랜덤 발현
{
	srand(time(NULL));
	for(int i=0; i<4; i++)                                                 
	{
		p[i].first = (-1*(double)rand()/(double)(RAND_MAX/0.01));          // -0.01~0 사이에 기울기 실수 난수(a) 발생
		p[i].second = (double)rand()/(double)(RAND_MAX/10)+10;             // 10~20 사이에 y 절편 실수 난수(b) 발생
	}
	for(int j=0; j<4; j++)           
		cout << p[j].first << ' ' << p[j].second << ' ';
	cout << '\n';
}
void selection()                                                                              // 선택 과정
{
	double tmp_score[4];                                                                      // 적합도를 역으로 저장할 일시 배열
	pair<double, double> parent[4];                                                           // 부모 세대 저장할 일시 배열
	int score_sum = 0;                                                                        // 최초 적합도의 합
	int new_sum = 0;                                                                          // 역 적합도의 합 
	
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<N; j++)                                                           
			score[i] += pow(gap(p[i].first, p[i].second, data[j].first)-data[j].second, 2);   // (회귀 함수값-데이터 함수값)^2의 합 (MSE)
		score_sum += score[i];                                                                // 최초 적합도들 더해나감
	}
	for(int i=0; i<4; i++)
	{
		tmp_score[i] = score_sum - score[i];                                                  // MSE가 낮을 수록 룰렛 확률을 높여야 함
		new_sum += tmp_score[i];                                                              // 새로운 적합도의 합
	}
	
	srand(time(NULL));                                                                        
	
	for(int i=0; i<4; i++)
	{
		double sum = 0;                                                                       // 적합도를 더해나갈 변수
		int rand_point = rand() % new_sum;                                                    // 룰렛 변수
		
		for(int j=0; j<4; j++)
		{
			sum += tmp_score[j];                          
			if(rand_point < sum)                                                              // 룰렛 변수가 sum보다 작으면 인덱스의 해를 부모로 
			{
				parent[i].first = p[j].first;
				parent[i].second = p[j].second;
				break;
			}
		}
	}
	
	for(int j=0; j<4; j++)                                                                    // parent에 임시 저장한 부모 해들을 원래 p 배열 저장
	{
		p[j].first = parent[j].first;                                                        
		p[j].second = parent[j].second;
	}
	for(int j=0; j<4; j++)
		cout << p[j].first << ' ' << p[j].second << ' ';
	cout << '\n';
}

void swap(int a, int b)                                                                                               // 교차 연산
{
	
	double tmp1 = ((p[a].first / 0.001 - ((int)(p[a].first / 0.001))) * 0.001);                                       // 첫 a의 뒤의 5자리 
	double tmp2 = p[a].second - (int)p[a].second;                                                                     // 첫 b의 소수점
	
	p[a].first = ((int)(p[a].first/ 0.001) * 0.001) + ((p[b].first / 0.001 - ((int)(p[b].first / 0.001))) * 0.001);   // 첫 a + 둘째 b 뒤의 5자리
	p[a].second = (int)p[a].second + (p[b].second-(int)p[b].second);                                                  // 첫 a + 둘째 b의 소수점
	p[b].first = ((int)(p[b].first/ 0.001) * 0.001) + tmp1;                                                           // 둘째 a + tmp1
	p[b].second = (int)p[b].second + tmp2;                                                                            // 둘쨰 b + tmp2
	
}
void crossover()
{
	for(int i=0; i<=2; i+=2)                                                                 // 1-2 , 3-4 끼리 짝지어서 교차 연산
		swap(i, i+1);
	for(int j=0; j<4; j++)
		cout << p[j].first << ' ' << p[j].second << ' ';                  
	cout << '\n';
}
void mutation()                                                                              // 변이 연산
{
	srand(time(NULL));
	for(int i=0; i<4; i++)
	{
		int rand_mutate = rand() % 1000;                                                     // 변이 변수 0-999까지
		if(rand_mutate < MUT)                                                                // 확률 0.005%(5보다 작을 경우)를 뚫으면 b의 정수 변이
			p[i].second = (p[i].second - (int)p[i].second) + (rand() % 5) + 15;
	}
	for(int j=0; j<4; j++)
		cout << p[j].first << ' ' << p[j].second << ' ';
	cout << '\n';
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N;                                                                                // 데이터 개수
	for(int i=0; i<N; i++)                                                                   // 데이터 입력
		cin >> data[i].first >> data[i].second;
	
	first_gen();                                                                             // 초기 세대 생성
	cout << '\n';
	for(int i=0; i<5; i++)                                                                   // n번만큼 선택, 교차, 변이 연산 반복
	{                                                                                        // 예제의 편의를 위해 5번만 진행
		selection();
		crossover();
		mutation();
		cout << '\n';
	}
}



