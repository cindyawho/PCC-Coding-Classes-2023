function isStrongPassword(password){
    if(password.length < 8){
        return false;
    }
    else if(password.indexOf("password") != -1){
        return false;
    }

    else{
        for(let i = 0; i < password.length; i++){
            if(password[i] == password[i].toUpperCase()){
                return true;
            }
        }
        return false;
    }
    return true;
}