/*  
    Author	:  Biprodas Roy  [ CSE, JUST. ]
    Problem	:  
    Algorithm 	:  
*/ 
import java.io.*;
import java.math.*;
import java.util.*;
class Main {
	public static void main(String[] args) throws IOException  {
	    	FastScanner in = new FastScanner( System.in );
        	PrintWriter out = new PrintWriter( new PrintStream( System.out ), true );
		
		//Solve Problem here

    }
}
 
class FastScanner {
        private int charsRead;
        private int currentRead;
        private byte buffer[ ] = new byte[ 0x1000 ];
        private InputStream reader;
 
        public FastScanner( InputStream in ) {
            reader = in;
        }
 
        public int read( ) {
            if ( charsRead == -1 ) {
                throw  new InputMismatchException( );
            }
 
            if ( currentRead >= charsRead ) {
                currentRead = 0;
                try {
                    charsRead = reader.read( buffer );
 
                } catch( IOException e ) {
                    throw new InputMismatchException(  );
                }
 
                if ( charsRead <= 0 ) {
                    return -1;
                }
            }
 
            return buffer[ currentRead++ ];
        }
 
        public int nextInt( ) {
            int c = read( );
 
            while ( isWhitespace( c ) ) {
                c = read( );
            }
 
            if ( c == -1 ) {
                throw new NullPointerException( );
            }
 
            if ( c != '-' && !( c >= '0' && c <= '9' ) ) {
                throw new InputMismatchException( );
            }
 
            int sign = c == '-' ? -1 : 1;
            if ( sign == -1 ) {
                c = read( );
            }
 
            if ( c == -1 || !( c >= '0' && c <= '9' ) ) {
                throw new InputMismatchException( );
            }
 
            int ans = 0;
            while ( !isWhitespace( c )  && c != -1 ) {
                if ( !( c >= '0' && c <= '9' ) ) {
                    throw  new InputMismatchException( );
                }
                int num = c - '0';
                ans = ans * 10 + num;
                c = read( );
            }
 
            return ans * sign;
        }
 
        public long nextLong( ) {
            int c = read( );
 
            while ( isWhitespace( c ) ) {
                c = read( );
            }
 
            if ( c == -1 ) {
                throw new NullPointerException( );
            }
 
            if ( c != '-' && !( c >= '0' && c <= '9' ) ) {
                throw new InputMismatchException( );
            }
 
            int sign = c == '-' ? -1 : 1;
            if ( sign == -1 ) {
                c = read( );
            }
 
            if ( c == -1 || !( c >= '0' && c <= '9' ) ) {
                throw new InputMismatchException( );
            }
 
            long ans = 0;
            while ( !isWhitespace( c )  && c != -1 ) {
                if ( !( c >= '0' && c <= '9' ) ) {
                    throw  new InputMismatchException( );
                }
                int num = c - '0';
                ans = ans * 10 + num;
                c = read( );
            }
 
            return ans * sign;
        }
 
        public boolean isWhitespace( int c ) {
            return  c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == -1;
        }
 
        public String next( ) {
            int c = read( );
            StringBuffer ans = new StringBuffer( );
 
            while ( isWhitespace( c ) && c != -1 ) {
                c  = read( );
            }
 
            if ( c == -1 ) {
                return null;
            }
 
            while ( !isWhitespace( c ) && c != -1 ) {
                ans.appendCodePoint( c );
                c = read( );
            }
 
            return ans.toString( );
 
        }
 
               
        public String nextLine( ) {
            String ans = nextLine0( );
 
            while ( ans.trim( ).length( ) == 0 ) {
                ans = nextLine0( );
            }
 
            return ans;
        }
       
        private String nextLine0( ) {
            int c = read( );
            if ( c == -1 ) {
                return null;
            }
            StringBuffer ans = new StringBuffer( );
            while ( c != '\n' && c != '\r' && c != -1 ) {
                ans.appendCodePoint( c );
                c = read( );
            }
 
            return ans.toString( );
 
        }
       
        public double nextDouble( ) {
            int c = read( );
            while ( isWhitespace( c ) ) {
                c = read( );
            }
 
            if ( c == -1 ) {
                throw new NullPointerException( );
            }
 
            if ( c != '.' && c != '-' && !( c >= '0' && c <= '9' ) ) {
                throw new InputMismatchException( );
            }
 
            int sign = c == '-' ? -1 : 1;
            if ( c == '-' ) {
                c = read( );
            }
            double ans = 0;
            while ( c != -1 && c != '.' && !isWhitespace( c ) ) {
                if ( !( c >= '0' && c <= '9' ) ) {
                    throw new InputMismatchException( );
                }
 
                int num = c - '0';
                ans = ans * 10.0 + num;
                c = read( );
            }
 
            if ( !isWhitespace( c ) && c != -1 && c != '.' ) {
                throw new InputMismatchException( );
            }
 
            double pow10 = 1.0;
 
            if ( c == '.' ) {
                c = read( );
            }
 
            while ( !isWhitespace( c ) && c != -1 ) {
                pow10 *= 10.0;
 
                if ( !( c >= '0' && c <= '9' ) ) {
                    throw new InputMismatchException( );
                }
                int num = c - '0';
                ans = ans * 10.0 + num;
                c = read( );
            }
 
            return ans * sign / pow10;
        }
}
 
