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
public class NumeroIntero {

    /**
     * constructor with parameter
     * @param numerointero integer to initialize
     */
    public NumeroIntero(int numerointero) {
        this.numerointero = numerointero;
    }
    
    /**
     * constructor without parameter
     */
    public NumeroIntero() {
        this.numerointero = 0;
    }
    
    /**
     * class integer
     */
    public int numerointero;
    
    /**
     * print class integer to stdout
     */
    public void stampaNumero() {
        System.out.println(numerointero);
    }
}
