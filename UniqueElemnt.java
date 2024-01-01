import java.io.*;

class UniqueElemnt {
	public static void main (String[] args) {
		System.out.println("GfG!");
		
		int[] a = {12,12,4,4,6,6,3,3,8};
		
		    
	    int ans = 0;
		for(int i:a){
		    ans = ans ^ i;
		}    
		    
		    System.out.print(ans);
	    
	}
		
		
	
}
