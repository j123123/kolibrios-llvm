{}

const
  { flags for CreateFile }
  GENERIC_READ=$80000000;
  GENERIC_WRITE=$40000000;
  CREATE_NEW = 1;
  CREATE_ALWAYS = 2;
  OPEN_EXISTING = 3;
  OPEN_ALWAYS = 4;
  TRUNCATE_EXISTING = 5;