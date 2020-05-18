//  装饰图像
	itemDef {	
		name selectskill
		group newgamemenugroup
		type ITEM_TYPE_BUTTON
		style WINDOW_STYLE_SHADER
		background "text/ChineseCHN/skill.tga"
		rect 400 10 256 36
		visible 0
		decoration
	//	autowrapped
	}
	
// 点击图像
	itemDef {	// newgame
		name newgamemenu
		group mainmenus
		type ITEM_TYPE_BUTTON
		style WINDOW_STYLE_SHADER
		background "text/ChineseCHN/newgame.tga"
		rect 45 165 128 36  // 45 201 128 36
		visible 1
		action { show newgamemenugroup ; hide modmenus ; hide load_menu ; hide optionsmenugroup ; hide credits }
		mouseEnter { show newgamemenub } 
		mouseExit { hide newgamemenub } 
	}

// 白色图像变色(单色)
	itemDef {	// newgame
		name newgamemenu
		group mainmenus
		type ITEM_TYPE_BUTTON
		style WINDOW_STYLE_SHADER
		background "text/ChineseCHN/newgame.tga"
		forecolor 1 1 1 1
		rect 45 165 128 36  // 45 201 128 36
		visible 1
		action { show newgamemenugroup ; hide modmenus ; hide load_menu ; hide optionsmenugroup ; hide credits }
		mouseEnter { show newgamemenub ; setitemcolor easy forecolor 0 1 0 1 } 
		mouseExit { hide newgamemenub ; setitemcolor easy forecolor 1 1 1 1 } 
	}	

	
	itemDef {	// newgame
		name newgamemenub
		group mainmenus
		type ITEM_TYPE_BUTTON
		style WINDOW_STYLE_SHADER
		background "text/ChineseCHN/newgameb.tga"
		rect 45 165 128 36
		visible 0
		action { show newgamemenugroup ; hide modmenus ; hide load_menu ; hide optionsmenugroup ; hide credits }	
	}

// 加文字图像

	itemDef {	// controls
		name controlsmenu
		group optionsmenugroup
		text "[+]"
		type ITEM_TYPE_BUTTON
		style WINDOW_STYLE_SHADER
		textfont UI_FONT_BIG
		textstyle 6
		textalign 0
		textscale .30
		textalignx -25
		textaligny 20
		forecolor 1 1 1 1
		background "text/ChineseCHN/options/controls.tga"
		rect 45 165 128 36
		visible 0
		action { show controlsmenus ; show controlbuttons ; hide gomenus ; hide options ; hide modmenus ; hide load_menu ; hide optionsmenugroup ; hide tips ; hide system ; hide credits ; hide controlsmenus ; hide controls ; hide controlbuttons ; hide systemmenus ; show mainmenus }
	}


// 背景边框
		itemDef 
	{
		name credits1
		group credits
		rect 155 102 500 300	
		style WINDOW_STYLE_FILLED
		border 1
		bordercolor .5 .5 .5 .5
		forecolor 1 1 1 1
		backcolor 0 0 0 .8
		visible 0
		decoration
	}

	
// 选项文字	
	itemDef {
		name selecteasy
		group selectskill
		text "[*]"
		type 1
		textfont UI_FONT_BIG
		style 0	
		textstyle 6
		rect 320 162 256 45
		textalign 0
		textscale .25		
		textalignx 6
		textaligny 12
		forecolor 0 1 0 1
		visible 0
		decoration
	}	
	
	
	
	
// 任务目标 左侧

	itemDef {	
		name page1a
		group page1
		cvarTest "mapname"
		showcvar { "level1" }	// added current map rev
		type ITEM_TYPE_BUTTON
		style WINDOW_STYLE_SHADER
		background "text/ChineseCHN/level1_p1.tga"
		rect 60 60 240 380
		visible 1
		autowrapped
		decoration
	}
	
	// 任务目标 右侧
	itemDef {	
		name page1b
		group page1
		cvarTest "mapname"
		showcvar { "level1" }	// added current map rev
		type ITEM_TYPE_BUTTON
		style WINDOW_STYLE_SHADER
		background "text/ChineseCHN/level1_p2.tga"
		rect 345 70 230 380
		visible 1
		autowrapped
		decoration
	}
	
	
1 - Red
2 - Green
3 - Yellow
4 - Blue
5 - Light Blue
6 - Pink
7 - White
8 - Black
9 - Red

	// 配色
	controls		.9 .9 .1 .8
	system			.0 .9 .0 .8
	game options 	.0 .5 .9 .8
	defaults 		.9 .0 .0 .8
	back	     	.9 .9 .9 .9
