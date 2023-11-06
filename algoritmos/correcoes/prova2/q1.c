#include <stdio.h>

int is_asc(int n, int c, int m[n][c]){

    int res = 1;

    for(int i=0; i<n; i++){
        if(i<n-1){
            if(m[i][c-1]>m[i+1][0]){
                res = 0;
                return res;
            }
        }
        for (int j = 0; j < c-1; j++)
        {
            if (m[i][j]>m[i][j+1])
            {
                res= 0;
                return res;
            }   
        } 
    }
    return res;
}

int main(){
    int m[][4] = {{1,2,4,3},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    printf("\n%d\n",is_asc(4,4,m));
}