function password(obj){
    const { name, birthYear, siteName } = obj;
    if (!name || !birthYear || !siteName || typeof birthYear !== 'number' || birthYear.toString().length !== 4) {
    return "invalid";
    }
    const capitalizedSiteName = siteName.charAt(0).toUpperCase() + siteName.slice(1);
    const generatePassword = `${capitalizedSiteName}#${name.toLowerCase()}@${birthYear}`;
    return generatePassword;
    }