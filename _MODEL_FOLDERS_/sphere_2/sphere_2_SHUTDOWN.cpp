    if(sphere_2_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &sphere_2_NORMALMAP);    
        sphere_2_NORMALMAP = 0;                      
    }                                                              
    if(sphere_2_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &sphere_2_TEXTUREMAP);   
        sphere_2_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(sphere_2_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &sphere_2_VBO);           
        sphere_2_VBO  = 0;                           
    }                                                              
    if(sphere_2_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &sphere_2_INDICES_VBO);   
        sphere_2_INDICES_VBO  = 0;                   
    }                                                              
