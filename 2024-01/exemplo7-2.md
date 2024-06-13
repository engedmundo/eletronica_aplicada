# 1 - Formulação verbal do problema
Um **cilindro** para alimentação de peças a partir de um depósito deve avançar após ser dado um *sinal de acionamento* **manual** ou **pedal**, *se* **houver peças** no referido depósito. Caso não haja peças, além de não acontecer o avanço do cilindro, deve ser dado um **alarme acústico** assim que, e somente se, for dado o sinal de início do comando, seja manualmente ou por pedal.

# 2 - Elaboração de uma tabela de correspondência lógica

| Variável | Tipo    | Notação | Correspondência lógica        |
| -        | -       | -       | -                             |
| Botão    | Entrada | $B$     | Botão acionado -> $B = 1$     |
| Pedal    | Entrada | $P$     | Pedal acionado -> $P = 1$     |
| Sensor   | Entrada | $S$     | Depósito com peças -> $S = 1$ |
| Cilindro | Saída   | $C$     | Cilindro avançado -> $C = 1$  |
| Alarme S.| Saída   | $A$     | Alarme acionado -> $A = 1$    |


# 3 - Elaboração de uma tabela verdade
Combinações possíveis -> 3 variáveis

$2^3 = 8$

8 combinações

| $B$ | $P$ | $S$ | $C$ | $A$ |
|  -  |  -  |  -  |  -  |  -  |
|  0  |  0  |  0  |  0  |  0  |
|  0  |  0  |  1  |  0  |  0  |
|  0  |  1  |  0  |  0  |  1  |
|  0  |  1  |  1  |  1  |  0  |
|  1  |  0  |  0  |  0  |  1  |
|  1  |  0  |  1  |  1  |  0  |
|  1  |  1  |  0  |  0  |  1  |
|  1  |  1  |  1  |  1  |  0  |


# 4 - Obtenção de uma equação booleana simplificada

## Mapa Veitch-Karnaugh

Duas equações booleanas - uma para cada saída

### Equação para o cilindro -> $C$:

| - | 00 | 01 | 11 | 10 | - |
| - | -  | -  | -  | -  | - |
| 0 | 0  | 0  | 1  | 0  | $\overline{B}$ |
| 1 | 0  | 1  | 1  | 0  | $B$ |
| - | $\overline{P}$ $\overline{S}$  | $\overline{P}$ $S$  | $PS$  | $P$ $\overline{S}$  | - |


$C = C_1 + C_2$

$C_1 = P * S$

$C_2 = B * S$

Substituindo as saídas parciais, temos:

$C = (P * S) + (B * S)$

Colocando $S$ em evidência, temos:

$C = S * (P + B)$

### Equação do alarme $\to$ $A$

| - | 00 | 01 | 11 | 10 | - |
| - | -  | -  | -  | -  | - |
| 0 | 0  | 0  | 0  | 1  | $\overline{B}$ |
| 1 | 1  | 0  | 0  | 1  | $B$ |
| - | $\overline{P}$ $\overline{S}$  | $\overline{P}$ $S$  | $PS$  | $P$ $\overline{S}$  | - |


$A = A_1 + A_2$

$A_1 = P * \overline{S}$

$A_2 = B * \overline{S}$

$A = (P * \overline{S}) + (B * \overline{S})$

$A = \overline{S} * (P + B)$

