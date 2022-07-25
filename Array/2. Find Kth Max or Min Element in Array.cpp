#Find Kth Max/Min values
1. Using Merge Sort return the index
Time Complexity : O(nlogn)

2. Using Set from STL
Time Complexity : O(logn) Worst : O(n)
Space : O(n) Worst

3. Using Min_Heap, Max_Heap
Time Complexity : O(nlogn)

4. Best Solution
1. Take a Priority Queue of Size K. 
2. Take a Loop and add it. If the size gets greater than K pop one. 

int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int> maxheap;
        
        for(int i=0; i<=r; i++){
            maxheap.push(arr[i]);
            if(maxheap.size()>k){
                maxheap.pop();
            }
        }
        
        return maxheap.top();
    }