#include <iostream>
using namespace std;

void inputMatrix( float m[][4]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> m[i][j];
        }
    }
}

void inputVector( float m[4]){
    for(int i = 0; i < 4; i++){
        cin >> m[i];
    }
}


int main() {
    float massA[4][4];
    float vec[4];
    float vecOut[4];

    cout << "Input matrix"<< endl;
    inputMatrix(massA);
    cout << "Input vector"<< endl;
    inputVector(vec);

    for(int j = 0 ; j < 4 ; j++){
        vecOut[j] = 0;
        for(int i = 0; i < 4; i++){
            vecOut[j]+=vec[i]*massA[i][j];

        }
    }
    for(float i : vecOut){
        cout<<i<<" ";
    }

    return 0;
}
