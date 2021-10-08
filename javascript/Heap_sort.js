// Heap Sort Algorith

var arr = [5, 2, 4, 6, 1, 3];
var n = arr.length;

function heapify(arr, n, i) {
    var largest = i;
    var l = 2 * i + 1;
    var r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest]) {
        largest = l;
    }

    if (r < n && arr[r] > arr[largest]) {
        largest = r;
    }

    if (largest != i) {
        var swap = arr[i];
        arr[i] = arr[largest];
        arr[largest] = swap;

        heapify(arr, n, largest);
    }
}   // end of heapify

function heapSort(arr) {
    var n = arr.length;

    for (var i = Math.floor(n / 2); i >= 0; i--) {
        heapify(arr, n, i);
    }

    for (var i = n - 1; i >= 0; i--) {
        var swap = arr[0];
        arr[0] = arr[i];
        arr[i] = swap;

        heapify(arr, i, 0);
    }
}   // end of heapSort

function printArray(arr) {
    var n = arr.length;
    for (var i = 0; i < n; ++i) {
        console.log(arr[i]);
    }
}

heapSort(arr);
printArray(arr);