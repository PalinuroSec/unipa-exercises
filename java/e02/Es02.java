/*
 * Copyright (C) 2017 palinuro
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
package es02;

/**
 *
 * @author palinuro
 */
public class Es02 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        NumeroIntero n0 = new NumeroIntero();
        NumeroIntero n1 = new NumeroIntero();
        NumeroIntero n2 = new NumeroIntero();
        
        n0.numerointero = 12;
        n1.numerointero = 4;
        n0.stampaNumero();
        n1.stampaNumero();
        n2.stampaNumero();
        
    }
    
}