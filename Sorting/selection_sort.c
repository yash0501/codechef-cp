#include <stdio.h>

int main() {
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	}
    for(i=0;i<n-1;i++){
        int min = i;
        int t;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        t=arr[i];
        arr[i] = arr[min];
        arr[min] = t;
    }
	for(i=0;i<n;i++){
	    printf("%d ",arr[i]);
	}
	return 0;
}
