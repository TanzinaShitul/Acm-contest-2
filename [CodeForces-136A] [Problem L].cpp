#include <iostream>
using namespace std;
int n, b, mat[110];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> b;
        mat[b] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << mat[i] << " ";
    }
}
