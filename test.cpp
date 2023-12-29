#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <cassert>
using namespace std;


//用向量创建二维数组,全0
vector<vector<int>>  generateArray1(){
    vector<vector<int>> arr(3, vector<int>(4,0));
    return arr;
}

//用指针方法创建二维数组
int** generateArray2(int rows, int cols){
    // 分配内存给每一行的指针
    int** array = new int*[rows];

    for(int i=0; i<rows; ++i){
        array[i] = new int[cols]{0};
    }

    return array;
}

//普通创建二维数组
int* generateArray3(){
    int* arr= new int[3*4]{0};
    return arr;
}


// 创建三维数组
vector<vector<vector<int>>> create3DArray1(int x,int y,int z){
    return vector<vector<vector<int>>>(x,vector<vector<int>>(y, vector<int>(z,0)));
}

int*** create3DArray2(int x, int y, int z) {
    int*** array = new int**[x];
    for (int i = 0; i < x; ++i) {
        array[i] = new int*[y];
        for (int j = 0; j < y; ++j) {
            array[i][j] = new int[z]{1};
        }
    }
    return array;
}

double divide(int a,int b){
    assert(b !=0 && "除数不能为零");
    return static_cast<double>(a)/b;
}


int main(void){
    
    // vector<vector<int>> arr1 = generateArray1();
    // int** arr2 = generateArray2(3,4);
    // int* arr3 = generateArray3(); 

    // int a[3][]={{1,2},{3,4},{5,6}};


    // for(int i=0; i<3; ++i){
    //     // for(int j=0; j<4; ++j){
    //     //     cout<< arr2[i][j] << " ";
    //     // }
    //     cout << arr3[i] << " ";
    //     // cout << endl;
    // }

    // int x = 4;
    // int y = 4;
    // int z = 4;

    // int*** myArray = create3DArray2(x, y, z);

    // // 遍历和打印数组的元素
    // for (int i = 0; i < x; ++i) {
    //     for (int j = 0; j < y; ++j) {
    //         for (int k = 0; k < z; ++k) {
    //             myArray[i][j][k] = i * 100 + j * 10 + k;  // Initialize values for demonstration
    //             std::cout << myArray[i][j][k] << " ";
    //         }
    //         std::cout << std::endl;
    //     }
    //     std::cout << std::endl;
    // }

    // // 释放内存
    // for (int i = 0; i < x; ++i) {
    //     for (int j = 0; j < y; ++j) {
    //         delete[] myArray[i][j];
    //     }
    //     delete[] myArray[i];
    // }
    // delete[] myArray;


    int a = 10;
    int b = 2;
    double result = divide(a,b);

    cout << "a/b:"<< result << endl;

    b=0;
    result = divide(a,b);
    cout << "a/b:"<< result << endl;

    system("pause");
    return 0;
}

