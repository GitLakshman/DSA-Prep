// Merge Sort - Divide and Merge the elements (Recursion)
import java.util.*;
class Main {
    public static void main(String[] args) {
        int[] arr = { 5, 3, 6, 2, 1, 4 };
        mergeSort(arr, 0, arr.length-1);
        for (int ele : arr) {
            System.out.print(ele + " ");
        }
    }
    public static void mergeSort(int[] arr, int low, int high){
        if(low >= high) return;
        int mid = (low+high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
    public static void merge(int[] arr, int low, int mid, int high){
        List<Integer> list = new ArrayList<>();
        int left = low;
        int right = mid+1;
        while(left <= mid && right <= high){
            if(arr[left] <= arr[right]){
                list.add(arr[left++]);
            }
            else{
                list.add(arr[right++]);
            }
        }
        while(left <= mid){
            list.add(arr[left++]);
        }
        while(right <= high){
            list.add(arr[right++]);
        }
        for(int i = low; i <= high; i++){
            arr[i] = list.get(i-low);
        }
    }
}
