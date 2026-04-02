#include <stdio.h>

#define MAX 10

void inputMatrix(int a[MAX][MAX], int r, int c) {
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
}

void addMatrix(int a[MAX][MAX], int b[MAX][MAX], int r, int c) {
    int sum[MAX][MAX];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void saddlePoint(int a[MAX][MAX], int r, int c) {
    int found = 0;
    for(int i=0;i<r;i++) {
        int min = a[i][0], col = 0;
        for(int j=1;j<c;j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }
        int isSaddle = 1;
        for(int k=0;k<r;k++) {
            if(a[k][col] > min) {
                isSaddle = 0;
                break;
            }
        }
        if(isSaddle) {
            printf("Saddle Point: %d\n", min);
            found = 1;
        }
    }
    if(!found)
        printf("No Saddle Point\n");
}

int determinant2x2(int a[MAX][MAX]) {
    return a[0][0]*a[1][1] - a[0][1]*a[1][0];
}

void inverse2x2(int a[MAX][MAX]) {
    int det = determinant2x2(a);
    if(det == 0) {
        printf("Inverse not possible\n");
        return;
    }

    float inv[2][2];
    inv[0][0] = a[1][1] / (float)det;
    inv[0][1] = -a[0][1] / (float)det;
    inv[1][0] = -a[1][0] / (float)det;
    inv[1][1] = a[0][0] / (float)det;

    printf("Inverse Matrix:\n");
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++)
            printf("%.2f ", inv[i][j]);
        printf("\n");
    }
}

void magicSquare(int a[MAX][MAX], int n) {
    int sum = 0;
    for(int j=0;j<n;j++)
        sum += a[0][j];

    int flag = 1;

    for(int i=0;i<n;i++) {
        int rowSum = 0;
        for(int j=0;j<n;j++)
            rowSum += a[i][j];
        if(rowSum != sum)
            flag = 0;
    }

    for(int j=0;j<n;j++) {
        int colSum = 0;
        for(int i=0;i<n;i++)
            colSum += a[i][j];
        if(colSum != sum)
            flag = 0;
    }

    int d1=0,d2=0;
    for(int i=0;i<n;i++) {
        d1 += a[i][i];
        d2 += a[i][n-i-1];
    }

    if(d1 != sum || d2 != sum)
        flag = 0;

    if(flag)
        printf("Magic Square\n");
    else
        printf("Not a Magic Square\n");
}

int main() {
    int a[MAX][MAX], b[MAX][MAX];
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter first matrix:\n");
    inputMatrix(a, r, c);

    printf("Enter second matrix:\n");
    inputMatrix(b, r, c);

    printf("\nAddition:\n");
    addMatrix(a, b, r, c);

    printf("\nSaddle Point (First Matrix):\n");
    saddlePoint(a, r, c);

    if(r == 2 && c == 2) {
        printf("\nInverse (First Matrix):\n");
        inverse2x2(a);
    } else {
        printf("\nInverse only for 2x2 matrix\n");
    }

    if(r == c) {
        printf("\nMagic Square Check (First Matrix):\n");
        magicSquare(a, r);
    } else {
        printf("\nMagic Square requires square matrix\n");
    }

    return 0;
}