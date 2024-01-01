import java.io.*;

class ReverseArray {
	public static void main (String[] args) {
		System.out.println("GfG!");
		
		int[] a = {12,4,6,3,8,2,0,7};
		
		int start = 0;
		int end = a.length-1;
		
		while(start<=end){
		    
		    int temp = a[start];
		    a[start] = a[end];
		    a[end] = temp;
		    
		    start++;
		    end--;
		    
		    
		    }
		    
		for(int i:a){
		    System.out.print(i+" ");
		}    
		    
		    
		}
		
		
	
}
