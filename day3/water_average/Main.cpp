#include<queue>
#include<iostream>
using namespace std;
struct Water {
	int S;
	int N;
	int M;
	int bushu;//步数
};
int snm[101][101][101] = {0};//n
void BFS();
Water cur, nex;
queue<Water> que;
int con_M, con_N;
int num = 6;
Water obj;
int main() {
	obj.bushu = 0, obj.N = 0, obj.M = 0;
	cin >> obj.S >> con_M >> con_N;
	que.push(obj);
	snm[obj.S][0][0] = 1;
	BFS();
}
void BFS() {
	while (!que.empty()) {
		cur = que.front();
		que.pop();
		cout << "目前:" << cur.S << " " << cur.N << " " << cur.M << "步数:" << cur.bushu << endl;
		if (((cur.M == cur.N && cur.M != 0) || (cur.M == cur.S && cur.M != 0) || (cur.N == cur.S && cur.N != 0))&&(cur.M==0||cur.N==0||cur.S==0)) {
			cout << cur.bushu << endl;
			return;
		}
		num = 5;

		if (cur.S != 0) {
			if (cur.N != con_N) {
				nex.M = cur.M, nex.bushu = cur.bushu + 1;
				num = con_N - cur.N;
				if (cur.S >= num)
					nex.N = con_N, nex.S = cur.S - num;
				else nex.N =cur.S+cur.N, nex.S = 0;
				cout << "入队列前11:" << nex.S << " " << nex.N << " " << nex.M << "步数:" << nex.bushu << endl;
				if ( snm[nex.S][nex.N][nex.M] == 0) {
					snm[nex.S][nex.N][nex.M] = 1;
					cout << "入队列:" << nex.S << " " << nex.N << " " << nex.M << "步数:" << nex.bushu << endl;
					que.push(nex);
				}
			}
			if (cur.M != con_M) {
				nex.N = cur.N, nex.bushu = cur.bushu + 1;
				num = con_M- cur.M;
				if (cur.S >=num)
					nex.M = con_M, nex.S = cur.S -num;
				else nex.M = cur.S+cur.M, nex.S = 0;
				cout << "入队列前12:" << nex.S << " " << nex.N << " " << nex.M << "步数:" << nex.bushu << endl;
				if (snm[nex.S][nex.N][nex.M] == 0) {
					snm[nex.S][nex.N][nex.M] = 1;
					cout << "入队列:" << nex.S << " " << nex.N << " " << nex.M << "步数:" << nex.bushu << endl;
					que.push(nex);
				}
			}
		}

		if (cur.M != 0) {
			if (cur.N != con_N) {
				nex.S = cur.S, nex.bushu = cur.bushu + 1;
				num = con_N - cur.N;
				if (cur.M >= num)
					nex.N = con_N, nex.M = cur.M- num;
				else nex.N = cur.M+cur.N, nex.M = 0;
				cout << "入队列前21:" << nex.S << " " << nex.N << " " << nex.M << "步数:" << nex.bushu << endl;
				if (snm[nex.S][nex.N][nex.M] == 0) {
					snm[nex.S][nex.N][nex.M] = 1;
					cout << "入队列:" << nex.S << " " << nex.N << " " << nex.M << "步数:" << nex.bushu << endl;
					que.push(nex);
				}
			}
			if (cur.S != obj.S) {
				nex.N = cur.N, nex.bushu = cur.bushu + 1;
				num = obj.S - cur.S;
				if (cur.M >= num)
					nex.S = obj.S, nex.M = cur.M - num;
				else nex.S = cur.S+cur.M, nex.M = 0;
				cout << "入队列前22:" << nex.S << " " << nex.N << " " << nex.M << "步数:" << nex.bushu << endl;
				if (snm[nex.S][nex.N][nex.M] == 0) {
					snm[nex.S][nex.N][nex.M] = 1;
					cout << "入队列:" << nex.S << " " << nex.N << " " << nex.M << "步数:" << nex.bushu << endl;
					que.push(nex);
				}
			}
		}

		if (cur.N != 0) {
			if (cur.M != con_M) {
				nex.S = cur.S, nex.bushu = cur.bushu + 1;
				num = con_M - cur.M;
				if (cur.N >= num)
					nex.M = con_M, nex.N = cur.N - num;
				else nex.M = cur.N+cur.M, nex.N = 0;
				cout << "入队列前31:" << nex.S << " " << nex.N << " " << nex.M << "步数:" << nex.bushu << endl;
				if (snm[nex.S][nex.N][nex.M] == 0) {
					snm[nex.S][nex.N][nex.M] = 1;
					cout << "入队列:" << nex.S << " " << nex.N << " " << nex.M << "步数:" << nex.bushu << endl;
					que.push(nex);
				}
			}
			if (cur.S != obj.S) {
				nex.M = cur.M, nex.bushu = cur.bushu + 1;
				num = obj.S - cur.S;
				if (cur.N >= num) {
					nex.S = obj.S, nex.N = cur.N - num;
				}
				else nex.S = cur.N+cur.S, nex.N = 0;
				cout << "入队列前32:" << nex.S << " " << nex.N << " " << nex.M << "步数:" << nex.bushu << endl;
				if (snm[nex.S][nex.N][nex.M] == 0) {
					snm[nex.S][nex.N][nex.M] = 1;
					cout << "入队列:" << nex.S << " " << nex.N << " " << nex.M << "步数:" << nex.bushu << endl;
					que.push(nex);
				}
			}
		}


	}
	cout << "N0" << endl;
	return;
}