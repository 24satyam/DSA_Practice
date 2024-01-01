

import java.io.*;

class PrintExtremeArrayEleemnt{
	public static void main (String[] args) {
		System.out.println("GfG!");
		
		int[] a = {12,4,6,3,8,2,0,7};
		
		int start = 0;
		int end = a.length-1;
		
		while(true){
		    if(start>end){
		        System.out.print(a[start]+" ");
		        break;
		    }
		    if(start==end){
		        break;
		    }
		    
		    if(start < end){
		        
		        System.out.print(a[start++] + " ");
		        System.out.print(a[end--]+ " ");
		    }
		    
		    
		}
		
		
	}
}
