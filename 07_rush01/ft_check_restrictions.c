/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_restrictions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:52:14 by lxavier-          #+#    #+#             */
/*   Updated: 2021/04/10 23:02:40 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*** Função para checar se numeros digitados podem formar jogos válidos ***

* Dado um ponteiro para uma string de 32 posições recebido na função:
* - ler o valor contido em cada uma das 32 posições apontadas pelo ponteiro;
* - copiar cada valor encontrado para dentro de outra string, cortando os
*   espaços e desprezando a ultima posição com '\0';
* - checar se nova string ficou com 17 posições (0 a 15 inputs + \0);
* - checar se nova string possui só os numeros 1, 2, 3 ou 4
* 
* Checando se há opções de jogo nao válidas (7 opções nao validas) na string:
(7 opções: 1,1 / 2,4 / 3,3 / 3,4 / 4,2 / 4,3 / 4,4)

1,2,3.- se os parzinhos de inicio e fim forem iguais (só o 2 pode):
*   ([0]col1up && [4]col1down) || ([1]col2up && [5]col2down)
	|| ([2]col3up && [6]col3down) || ([3]col4up && [7]col4down)
	|| ([8]row1left && [12]row1right) || ([9]row2left && [13]row2right)
	|| ([10]row3left &&  [14]row3right) || ([11]row4left && [15]row4right)
	forem iguais a 1 ou 3 ou 4 ==>> ERRO
	(até contador <=15: ([i] && [i+4]) == (1 || 3 || 4))

4. - se o primeiro for 2 e o segundo 4 ==>> ERRO
	(até contador <=15: ([i] == 2 && [i+4] == 4))
	
5. - se o primeiro for 3 e o segundo 4 ==>> ERRO
	(até contador <=15: ([i] == 3 && [i+4] == 4))
	
6,7. - se o primeiro for 4 e o segundo 2 ou 3 ==>> ERRO
	(até contador <=15: ([i] == 4 && ([i+4] == 2 || [i+4] == 3))


* Checando restrições de acordo com as 16 posições da nova string:
    (1ª linha e coluna da esquerda enxergam 4 préedios)
  - se [0]col1up == 4 então [0]destino = 1 [1]destino = 2 [2]destino = 3 [3]destino = 4 (1ª linha inteira)
							[8]destino = 1 [1]destino = 2 [2]destino = 3 [2]destino = 4 (1ª coluna inteira)
	(1ª linha e coluna da esquerda exergam 1 prédio)
  - se [0]col1up == 1 então [0]destino = 4
  - se [0]col1up == 4 e [3]col4up == 1 entao [0]destino = 4 [1]destino = 3 [2]destino = 2 [3]destino = 1 (1ª linha inteira)
 
 ./rush-01 "[0]col1up [1]col2up [2]col3up [3]col4up [4]col1down [5]col2down [6]col3down [7]col4down 
 [8]row1left [9]row2left [10]row3left [11]row4left [12]row1right [13]row2right [14]row3right [15]row4right"

*/