<h1>Atividades 10 </h1>

<p> Um promoter da cidade de Paracatu deseja controlar todos os eventos dos quais participa e você foi
contratado para resolver esse problema.</p>
  
<p> Assim que começou o trabalho, você ficou sabendo que o cadastro de um evento necessita de: identificador
único (um código inteiro), nome, local, data da realização, quantidade de ingressos colocados à venda,
custos de organização e valor da entrada.</p>

<p> Foi-lhe informado também que existem sempre três valores de entrada: o 1o valor, para as entradas do
tipo popular; o 2o valor, para as entradas do tipo normal e o 3o valor para as entradas do tipo especial.
Alguns desses eventos são festas open bar, possuindo assim, além de todas as informações anteriores,
uma relação das quatro bebidas que serão servidas. As informações das bebidas, por sua vez, são nome,
teor alcóolico e valor unitário.</p>

<p> O valor das entradas populares é calculado automaticamente, da seguinte forma: </p>
  
<ul>
<li> eventos open bar: R$ 60,00 mais 50% do valor unitário de cada bebida que será servida;</li>
<li> demais eventos: custo de organização dividido pela quantidade de ingressos colocados à venda.</li>
</ul>
  
<p> O valor da entrada normal é o valor da entrada popular mais 10% desse mesmo valor. Já o valor da entrada
especial é o valor da entrada normal mais 15% desse mesmo valor. </p>

<p> Você deverá implementar um sistema que cadastre os eventos desse promoter. O cadastro dos eventos
deverá ser finalizado quando for inserido 0 (zero) para o identificador único.</p>

<p> O sistema deverá funcionar com o seguinte menu de opções: </p>

<ol>
<li> - Cadastrar evento</li>
<li> 2 – Pesquisar evento</li>
<li> 3 – Ingressos vendidos</li>
<li> 4 – Exibir resultado por evento</li>
<li> 5 – Exibir resultado geral</li>
<li> 6 – Sair</li>
</ol>
  

