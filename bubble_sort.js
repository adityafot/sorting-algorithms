function bubble_sort(arr) {
    for (let i=0 ; i<arr.length-1 ; i++) {
        let flag = false;
        for (let j=0 ; j<arr.length-i-1 ; j++) {
            if (arr[j] > arr[j + 1]) {
                [arr[j],arr[j+1]] = [arr[j+1],arr[j]];
                flag = true;
            }
        }
        if (!flag) {
            return;
        }
    }
}

let a = [4,7,8,9,54,6,75];
bubble_sort(a);
for (let i = 0; i < a.length; i++) {
    console.log(a[i]);
}