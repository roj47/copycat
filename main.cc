
/************************
*HEADER*
************************/

.container{
    display: grid;
    grid-template-columns: 1fr 1fr 1fr 1fr 6fr 1fr 1fr 1fr;
    grid-gap: 12px;
    background-color: rgb(255, 255, 255);
    box-shadow: 1px 0px 4px rgb(97, 96, 96);
    position: sticky;
    top: 0;
    padding-top: 20px;
    padding-bottom: 20px;
    padding-left: 60px;
    padding-right: 60px;
}
.container p{
    font-weight: 900;
    font-size: medium;
    font-family:sans-serif ;
    text-align: center;
}
.container p:hover{
    color: rgb(0 112 74)

}
#NavLogo{
    width: 50px;
    position: relative;
    left: 90px;
}
#NavStore{
    grid-column: 6/7;
}
#NavSign{
    grid-column:7/8;
    border: 2px solid black;
    border-radius: 12px;
    transition: 0.5s;
}
#NavJoin{
    color:white;
    background-color: black;
    border: 2px solid black;
    border-radius: 12px;
    grid-column: 8/9;
    transition: 0.5s;
}
#NavSign:hover{
    color: black;
    background-color: rgb(161, 161, 161);
}
#NavJoin:hover{
    background-color: rgb(134, 134, 134);
}


/************************
*BODY*
************************/
body{
    background-color: rgb(255, 255, 255);
    margin: 0;
}
/************************
Main
************************/
.Topic{
    display: grid;
    grid-template-columns: 1fr 3fr 3fr 1fr;
    row-gap: 25px   ;
    margin: 0;
}
#green, #header, #light{
    display: grid;
    text-align: center;
}

#green{
    background-color:rgb(10, 58, 42) ;
    color: white;
    font-size: larger;
    
}
#light, #header{
    background-color: rgb(203, 230, 222);
}

#header{
    padding: 12px;
    font-size: 23px;
    grid-column: 2/4;
}
#header p{
    padding-left: 250px;
    padding-right:250px;
    padding-bottom: 15px;
}
/************************
*Images*
************************/
.Content1{
    grid-column: 2/3;
    text-align: center;
    align-items: center;
}
.Content2{
    grid-column: 3/4;
    text-align: center;
    align-items: center;
}
h3,h2 {
    padding-left: 70px;
    padding-right: 70px;   
}
h2{
    font-size: 39px;
}
.Content1 img{
    max-width: 100%;
    max-height: 100%;
}
.Content2 img{
    max-width: 100%;
    max-height: 100%;
}
/************************
*FOOTER*
************************/