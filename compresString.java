public class stringCompress{

     public static void main(String []args){
         String str = "aaabbbbcccc";
         int i=0;
         int count = 0;
         StringBuilder op = new StringBuilder();
         
         while(i < str.length() - 1){
             
             count++;
             if(str.charAt(i) != str.charAt(i + 1)){
                 op.append(str.charAt(i)).append(count);
                 count = 0;
               }
            ++i; 
         }
         op.append(str.charAt(i)).append(count+1);
        System.out.println("\n compressed : "+op);        
     }
}
