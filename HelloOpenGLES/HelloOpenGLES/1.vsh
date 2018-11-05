attribute vec3 position;
attribute vec4 color;
attribute vec2 inputTextureCoordinate;

varying vec2 textureCoordinate;
varying vec4 inputColor;

void main()
{
    gl_Position = vec4(position, 1.0);
    inputColor = color;
    textureCoordinate = inputTextureCoordinate;
}
