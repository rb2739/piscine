/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.rs                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 13:38:42 by charles           #+#    #+#             */
/*   Updated: 2020/05/21 13:38:43 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

pub fn rush(x: i32, y: i32) {
    for _ in 0..y {
        for _ in 0..x {
            print!("x");
        }
        print!("\n");
    }
}
