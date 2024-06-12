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

### Equação para o cilindro:

| - | 00 | 01 | 11 | 10 | - |
| - | -  | -  | -  | -  | - |
| 0 | -  | -  | -  | -  | $\overline{A}$ |
| 1 | -  | -  | -  | -  | $A$ |
| - | $\overline{B}$ $\overline{C}$  | $B$ $\overline{C}$  | $BC$  | $B$ $\overline{C}$  | - |
