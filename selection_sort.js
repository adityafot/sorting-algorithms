function selection_sort(arr) {
    for (let i=0; i<arr.length; i++) {
        let min_index = i;
        for (let j=i+1; j<arr.length; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        [arr[i],arr[min_index]] = [arr[min_index],arr[i]];
    }
    return arr;
}

let arr = [2,65,48,7,5,8,7];
selection_sort(arr);

for (let i = 0; i < arr.length; i++) {
    console.log(arr[i]);
}