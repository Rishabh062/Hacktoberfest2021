// Program created by Sameer Aggrawal (Github user_name = sameer-19)
// C++ program of Binary Search (Searching Algorithm)
    #include <iostream>
    using namespace std;

    // binary search function to search element is present in array or not
    int Binarysearch(int a[], int l, int r, int x)
    {
        while (l <= r) {
            int mid = l + (r - l) / 2;

            // Check if x is present at middle position
            if (a[mid] == x)
                return mid;

            // If x greater than middle element, ignore left half
            if (a[mid] < x)
                l = mid + 1;

            // If x is smaller than middle element, ignore right half
            else
                r = mid - 1;
        }

        // if we reach here, then element was not present in the array
        return -1;
    }

    int main()
    {
        int i,n,x;
        cout<<"Enter number of elements in array: ";
        cin>>n;
        int a[n];
        cout<<"Enter sorted array of elements: ";
        for(i=0;i<n;i++)
            cin>>a[i];
        cout<<"Enter number to be searched: ";
        cin>>x;
        int flag=Binarysearch(a,0,n-1,x);
        if(flag==-1) cout<<"Searched Number not found in array";
        else cout<<"Searched Number found in array";
        return 0;
    }
