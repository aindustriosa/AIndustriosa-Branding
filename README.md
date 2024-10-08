# AIndustriosa-Branding
Panel de logos de patrocinadores e colaboradores interactivo, construidos mediante ferramentas de fabricación dixital (Impresión 3D, corte laser, CNC…)

<img src="./images/render.jpg" width="1000" />

Durante este ano un dos proxectos propostos foi a elaboración dun novo panel de patrocinadores, intentando empregar todos os medios disponibles na Industriosa.

A idea era facer un panel interactivo de logos que se poidese integrar co Home Assistant do local, e usalo tamben de sinalítica.

A parte electrónica usamos tiras de led RGB de 5V coa idea que mediante sinxelas circuitos con un microcontrolador controlar cada panel.

Para empezar o deseño da base foi elaborada con InkScape.

<img src="./images/inkscape.png" width="1000" />

Partindo los vectores modelamos nun programa de 3d mediante ferramentas de extrusión e operacións boleanas as bases e soportes los leds.

<img src="./images/base_panel.png" width="1000" />

Con mesmo SVG sacamos os soportes dos leds de cada logo, deixando unha marxe para colocar as luces.

<img src="./images/base_logo.png" width="1000" />

A maioria dos elementos foron impresos en 3d, dende as bases con PLA negro e as partes translucidas en PLA blanco con apenas 2 capas de recheo.

<img src="./images/AIndustriosa0.jpg" width="1000" />

Para o deseño das pcbs, usamos o kicad, facendo unha sinxela placa cun Atiny412, dos saidas para duas tiras leds, toma de corrente e I2C, así como pin para programalos por UPDI

<img src="./images/KiCad_sch.jpg" width="1000" />

<img src="./images/KiCad_pcb.jpg" width="1000" />

Mediante 

<img src="./images/PCB.jpg" width="1000" />