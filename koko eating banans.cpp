class Solution {

  
     public static boolean KyaBanana(int mid, int h, int[] piles) {

    int total_time = 0;

    for (int i = 0; i < piles.length; i++) {
        total_time += (piles[i] + mid - 1) / mid;

        if (total_time > h) {
            return false;
        }
    }

    return true;
}

    public int minEatingSpeed(int[] piles, int h) {
        
        int low = 1;
        int high = 0 ;
        int ans = 0 ;
        for(int num : piles)
        {
            low = Math.min(low,num) ;
            high = Math.max(high,num) ;
        }
        while(low <= high)
        {
            
            int mid = low + (high-low)/2 ;
            if(KyaBanana(mid,h,piles))
            {
                ans = mid ; 
                high = mid - 1 ;
            }
            else
            {
                low = mid + 1 ;
            }
        }
        return ans ;
    }
}