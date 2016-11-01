uniform vec4 _LightColor0;
uniform float _LitOutlineThickness;
uniform float _UnlitOutlineThickness;
uniform vec4 _OutlineColor;
varying vec3 viewDir,lightDir,normal;

void main()
{

	float intensity;
	vec4 color;
	
	// normalizing the lights position to be on the safe side
	
	vec3 n = normalize(normal);
	
	intensity = dot(lightDir,n);
  
	if (intensity > 0.95)
		color = vec4(0.5,0.5,1.0,1.0);
	else if (intensity > 0.5)
		color = vec4(0.3,0.3,0.6,1.0);
	else if (intensity > 0.25)
		color = vec4(0.2,0.2,0.4,1.0);
	else
		color = vec4(0.1,0.1,0.2,1.0);
	
	gl_FragColor = intensity*color;
  //gl_FragColor = color;
} 
