// trình bày các thuật toán sort ở đây
#include<sorting.h>

void selection_sort(int a[],int n,long long& comparisions) {
    for(int i = 0;++comparisions && i < n - 1;i++) {
        int index = i;
        for(int j = i + 1;++comparisions && j < n;j++) {
            if(a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void insertion_sort(int a[],int n,long long& comparisions) {
    for(int i = 1;++comparisions && i < n;i++) {
        int j = i - 1;
        int key = a[i];
        while(++comparisions && j >= 0 && ++comparisions &&  a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

// 3
void bubble_sort(int a[],int n,long long& comparisions) {
    bool swap=true;
	int temp;
	for(int i=0;++comparisions&&swap;i++){
		swap=false;
		for(int j=0;++comparisions&&j<n-1;j++){
			if(++comparisions&&a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				swap=true;	
			}
		}
	}
}

// 4
void shell_sort(int a[],int n,long long& comparisions) {

}

// 5
void heap_sort(int a[],int n,long long& comparisions) {
    
}

// 6
void merge(int a[],int left,int right,long long& comparisions){
    if(++comparisions&&left>=right) return ;
	int mid=left+ (right-left)/2;
	int *temp=new int[right-left+1];
	int i=left,j=mid+1,count=0;
	while(++comparisions&&i<=mid&&++comparisions&&j<=right){
		if(++comparisions&&a[i]<a[j]){
			temp[count++]=a[i];
			i++;
		}else{
			temp[count++]=a[j];
			j++;
		}
	}while(++comparisions&&i<=mid){
		temp[count++]=a[i++];
	}while(++comparisions&&j<=right){
		temp[count++]=a[j++];
	}for(int o=0;++comparisions&&o<count;o++){
		a[left+o]=temp[o];
	}delete[] temp;
}

void MergeSort(int a[],int left,int right,long long& comparisions){
	if(++comparisions&&right<=left) return ;
	int mid=left+(right-left)/2;
	MergeSort(a,left,mid,comparisions);
	MergeSort(a,mid+1,right,comparisions);
	Merge(a,left,right,comparisions);
}
void merge_sort(int a[],int n,long long& comparisions) {
    MergeSort(a,0,n-1,comparisions);
}

// 7
void quick_sort(int a[],int n,long long& comparisions) {
    
}

// 8
void counting_sort(int a[],int n,long long& comparisions) {
    
}

// 9
void radix_sort(int a[],int n,long long& comparisions) {
    
}

// 10
void flash_sort(int a[],int n,long long& comparisions) {
    
}

// 11
void shaker_sort(int a[],int n,long long& comparisions) {
    
}


