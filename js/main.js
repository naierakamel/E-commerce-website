let nav = document.querySelector('.navbar');
 function onscroll(){
    if(document.documentElement.scrollTop>50){
nav.classList.add('header-scrolled');
    }else{
        nav.classList.remove('header-scrolled');
 
    }
}
