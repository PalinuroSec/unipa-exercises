/*
 * 
 * Copyright 2017 Lorenzo "Palinuro" Faletra <palinuro@parrotsec.org>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
package es01;

/**
 *
 * @author palinuro
 */
public class Es01 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args)
    {
        for(int i=3;i<10000000;i=i+2){
            if(isPrime(i) == true)
                System.out.println(i+" is prime\n");
        }
    }
    
    /**
     * return true if param is prime
     */
    static boolean isPrime(int n) {
    //check if n is a multiple of 2
    if (n%2==0) return false;
    //if not, then just check the odds
    for(int i=3;i*i<=n;i+=2) {
        if(n%i==0)
            return false;
    }
    return true;
}
    
}
