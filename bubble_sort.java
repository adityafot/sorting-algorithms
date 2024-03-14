public class bubble_sort {

    public static void bubblesort(int[] a) {
        int n = a.length;

        for(int i = 0; i < n - 1; i++) {

            boolean flag = false;

            for(int j = 0; j < n - i - 1 ; j++) {
                if (a[j] > a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    flag = true;
                }
            }
            if(flag == false){
                return;
            }
        }

    }
    public static void main(String[] args) {
        int[] a= { 1,4,7,8,6,25,2};
        bubblesort(a);
        for(int i = 0; i < a.length; i ++){
            System.out.print(a[i] + " ");
        }
    }
}
