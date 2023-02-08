#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        int x = arr[0];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            if(arr[0] < i){
                int res = i-x+1/2;
                i++;
            }
        }
        return (x); 
    }
}


for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    x = a[0]
    a = sorted(a[1:])
    for y in a:
        if y > x:
            x += (y - x + 1) // 2
    print(x)

