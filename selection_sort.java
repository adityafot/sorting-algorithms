public class selection_sort {
    static void selection_Sort(int[] arr){
        for(int i = 0; i < arr.length - 1; i++){
            int min_index = i;
            for(int j = i + 1; j < arr.length ; j++){
                if(arr[j] < arr[min_index]){
                    min_index = j;

                }
            }
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
    public static void main(String[] args) {
        int[] a = {4,5,25,7,9,7,1};
        selection_Sort(a);
        for(int i = 0; i < a.length; i++){
            System.out.print(a[i] + " ");
        }

    }
}