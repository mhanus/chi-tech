/** \defgroup LuaPie Raspberry Pie
 * \ingroup LuaGeneralUtilities*/
/** \brief Exports a GPIO pin.
\param pinNumber int GPIO pin number to be exported.
\ingroup LuaPie
\author Jan*/
int CHI_LUA::chiPieExportPin(int pinNumber)
{return;} 
/** \brief Sets a pin to READ or WRITE.
\param pinNumber int GPIO pin number.
\param mode int 0=Read, 1=Write.
\ingroup LuaPie
\author Jan*/
int CHI_LUA::chiPieSetPinMode(int pinNumber, int mode)
{return;} 
/** \brief Sets a pin to HIGH or LOW.
\param pinNumber int GPIO pin number.
\param mode int 0=Low, 1=High
\ingroup LuaPie
\author Jan*/
int CHI_LUA::chiPieSetPinValue(int pinNumber, int mode)
{return;} 
/** \brief Reads a pin.
\param pinNumber int GPIO pin number.
\ingroup LuaPie
\author Jan*/
int CHI_LUA::chiPieGetPinValue(int pinNumber)
{return;} 
/** \brief Initializes SPI.
\ingroup LuaPie
\author Jan*/
int CHI_LUA::chiPieInitSPI()
{return;} 
/** \brief Reads an SPI MCP3008 chip unbuffered.
\param channelNumber int Channel 0-7 to be read off the MCP3008 chip.
\ingroup LuaPie
\author Jan*/
int CHI_LUA::chiPieReadSPIChannel(int channelNumber)
{return;} 
/** \brief Sets an SPI MCP3008 chip to either be buffered or not.
\param channelNumber int Channel 0-7 to be read off the MCP3008 chip.
\param bufferFlag bool true=Is buffered, false= Not buffered.
\ingroup LuaPie
\author Jan*/
int CHI_LUA::chiPieSetSPIBuffer(int channelNumber, bool bufferFlag)
{return;} 
/** \brief Reads an SPI MCP3008 chip buffer.
\param channelNumber int Channel 0-7 to be read off the MCP3008 chip.
\param bufferPos int Buffer position (0 to 999).
\ingroup LuaPie
\author Jan*/
int CHI_LUA::chiPieGetSPIBuffer(int channelNumber, int bufferPos)
{return;} 
/** \brief Initializes the Pi's UART serial communication.
\param baudrate   int Can be any of the <I>Serial Options</I>.
### Serial options
PI3_BAUD_1200  0
PI3_BAUD_2400  1
PI3_BAUD_4800  2
PI3_BAUD_9600  3
PI3_BAUD_19200 4
PI3_BAUD_38400 5
\example
CHI_PI3 chipie;
chipie.InitializeSerial(PI3_BAUD_9600);
\endexample
\ingroup LuaPie
\author Jan*/
int CHI_LUA::chiPieInitializeSerial(int baudrate)
{return;} 
/** \brief Writes a message to the serial port.
\param message char Message to be sent.
\ingroup LuaPie
\author Jan*/
int CHI_LUA::chiPieSerialWrite(char message)
{return;} 
/** \brief Reads a message from the serial port.
\ingroup LuaPie
\author Jan*/
int CHI_LUA::chiPieSerialRead()
{return;} 
/** bool chiThermoSetComponentProperty() Sets the property of a component.
 *
\param sysHndle  Handle to the system being referenced.
\param compHndle Handle to the component being referenced.
\param propCode  Property code.
 
 \return Success=true
\ingroup LuaThermoalpha
\author Jan*/
int CHI_LUA::chiThermoSetComponentProperty(Handle sysHndle, Handle compHndle, Property propCode)
{return;} 
/** int chiThermoCreateVolumeFromCoordinates() Creates a hydrodynamic volume using a start and end coordinate.
\params systemHandle int Handle to the system to which the volume belongs.
\params point1		 Table Table with fields {x,y,z} containing the start location.
\params point2		 Table Table with fields {x,y,z} containing the end location.
\return Returns a unique handle for the created volume. (int)
\ingroup LuaThermoalpha
\author Jan*/
int CHI_LUA::chiThermoCreateVolumeFromCoordinates(int systemHandle, Table point1, Table point2)
{return;} 
/** \defgroup LuaThermoalpha Thermoalpha
 * \ingroup LuaModules*/
/** void chiThermoCreateSystem() Generate an empty Thermal-hydraulic system.
\return Returns a unique handle for the created system.
\ingroup LuaThermoalpha
\author Jan*/
int CHI_LUA::chiThermoCreateSystem()
{return;} 
/** void chiThermoConnectTwoComponents() Connect two hydrodynamic components using a single junction.
\param systemHandle  Handle to the system to which all the components belong.
\param leftComponent Component to be connected to the left of the junction.
\param sjunc Single junction to be used for the connection.
\param rigtComponent Component to be connected to the right of the junction.
\param mode 0=end-begin, 1=begin-end, 2=end-end,
\ingroup LuaThermoalpha
\author Jan*/
int CHI_LUA::chiThermoConnectTwoComponents(Handle systemHandle, Component leftComponent, Single sjunc, Component rigtComponent, 0=end-begin, mode)
{return;} 
/** bool chiThermoInitialize() Initializes system.
\param systemHandle int Handle to the system which should be initialized.
\return Returns true if successfully initialized and false otherwise.
\ingroup LuaThermoalpha
\author Jan*/
int CHI_LUA::chiThermoInitialize(int systemHandle)
{return;} 
/** int chiThermoCreateBC() Creates a hydrodynamic boundary condition.
\params systemHandle int Handle to the system to which the volume belongs.
\return Returns a unique handle for the created boundary condition.
\ingroup LuaThermoalpha
\author Jan*/
int CHI_LUA::chiThermoCreateBC(int systemHandle)
{return;} 
/** bool chiThermoGetComponentProperty() Sets the property of a component.
 *
\param sysHndle  Handle to the system being referenced.
\param compHndle Handle to the component being referenced.
\param propCode  Property code.
 
 \return Success=true
\ingroup LuaThermoalpha
\author Jan*/
int CHI_LUA::chiThermoGetComponentProperty(Handle sysHndle, Handle compHndle, Property propCode)
{return;} 
/** int chiThermoCreateSJunction() Creates a hydrodynamic single junction.
\params systemHandle Handle to the system to which the volume belongs.
\return Returns a unique handle for the created single junction.
\ingroup LuaThermoalpha
\author Jan*/
int CHI_LUA::chiThermoCreateSJunction(Handle systemHandle)
{return;} 
/** Creates a Product-quadrature.
 *
\param QuadratureType int Quadrature identifier.
\param Np int Number of polar angles per octant.
\param Na int Number of Azimuthal angles per octant.
##_
###QuadratureType:\n
GAUSS_LEGENDRE\n
 Gauss-Legendre quadrature for the polar angles and no quadrature rule
 for the azimuthal angle. Suitable only for 1D simulations. \n\n
GAUSS_LEGENDRE_LEGENDRE\n
 Gauss-Legendre quadrature for both the polar and azimuthal dimension.\n\n
GAUSS_LEGENDRE_CHEBYSHEV\n
 Gauss-Legendre quadrature for the polar angle but Gauss-Chebyshev
 for the azimuthal angle.\n\n
\return Returns a unique handle to the created product quadrature rule
\ingroup LuaQuadrature
\author Jan*/
int CHI_LUA::chiCreateProductQuadrature(int QuadratureType, int Np, int Na)
{return;} 
/**\defgroup LuaQuadrature Quadrature rules
 * \ingroup LuaMath*/
/** Creates a quadrature.
 *
\param QuadratureType int Quadrature identifier.
\param NumberOfPoints int Number of quadrature points.
Identifiers:\n
 GAUSS_LEGENDRE = Gauss-Legendre quadrature.
 GAUSS_CHEBYSHEV = Gauss-Chebyshev quadrature.
\return Returns a unique handle to the created quadrature rule
\ingroup LuaQuadrature
\author Jan*/
int CHI_LUA::chiCreateQuadrature(int QuadratureType, int NumberOfPoints)
{return;} 
/**Provides the function evaluation of Pn at value x.
 \param N int The Legendre polynomial.
 \param x double The evaluation point.
 \ingroup LuaMath*/
int CHI_LUA::chiLegendre(int N, double x)
{return;} 
/**Provides the function evaluation of the derivative of Pn at value x
 \param N int The Legendre polynomial.
 \param x double The evaluation point.
 \ingroup LuaMath*/
int CHI_LUA::chiLegendreDerivative(int N, double x)
{return;} 
/**Provides the function evaluation of the spherical harmonics.
 *
 * \param ell int The \f$ \ell \f$-th order of the harmonic.
 * \param m   int The \f$ m \f$-th moment of the harmonic.
 * \param theta double Radian polar angle \f$ \theta \f$.
 * \param varphi double Radian azimuthal angle \f$ \varphi \f$.
 *
 * This code has a whitepaper associated with it
 * <a href="SphericalHarmonics.pdf" target="_blank"><b>Spherical Harmonics</b></a>
 *
 * \ingroup LuaMath*/
int CHI_LUA::chiYlm(ell \param, m \param, theta \param, varphi \param)
{return;} 
/** Splits an edge loop into edges if they differ by a certain angle.
\param LoopCollectionHandle int Handle to the Loop collection.
\param LoopHandle int Handle to the loop inside the collection.
\param Angle double (Optional) Value of the angle by which to split. Default 1 deg.
\return Handle int. Handle to the newly created LoopCollection.
\ingroup LuaMesh
\author Jan*/
int CHI_LUA::chiEdgeLoopSplitByAngle(int LoopCollectionHandle, int LoopHandle, double Angle)
{return;} 
/** \defgroup LuaMesh A Meshing
## Mesh Handling
 Meshing in ChiTech is made available via the chi_mesh namespace. All instances
 of entities are stored within a handler (chi_mesh::MeshHandler). A mesh handler
 is created with a call to chiMeshHandlerCreate().
 \code
 chiMeshHandlerCreate()
 \endcode
## Predefined 2D Mesh Setup Example
\code
chiMeshHandlerCreate()
--
newSurfMesh = chiSurfaceMeshCreate();
chiSurfaceMeshImportFromOBJFile(newSurfMesh,"CHI_RESOURCES/TestObjects/SquareMesh2x2.obj")
loops,loop_count = chiSurfaceMeshGetEdgeLoops(newSurfMesh)
--
--
line_mesh = {};
line_mesh_count = 0;
--
for k=1,loop_count do
  split_loops,split_count = chiEdgeLoopSplitByAngle(loops,k-1);
  for m=1,split_count do
    line_mesh_count = line_mesh_count + 1;
    line_mesh[line_mesh_count] = chiLineMeshCreateFromLoop(split_loops,m-1);
  end
--
end
\endcode
*/
/** \defgroup LuaSurfaceMesh Surface Meshes
 * \ingroup LuaMesh
*/
/** Creates a new empty surface mesh.
\return Handle int Handle to the created surface mesh.
\ingroup LuaSurfaceMesh
\author Jan*/
int CHI_LUA::chiSurfaceMeshCreate()
{return;} 
/** Loads mesh data from a wavefront object.
 *
\param SurfaceHandle int Handle to the surface on which the operation is to be performed.
\param FileName char* Path to the file to be imported.
\param polyflag bool (Optional)Flag indicating whether triangles
 are to be read as polygons. [Default: true)
\return success bool Return true if file was successfully loaded and false
 otherwise.
\ingroup LuaSurfaceMesh
\author Jan*/
int CHI_LUA::chiSurfaceMeshImportFromOBJFile(int SurfaceHandle, char* FileName, bool polyflag)
{return;} 
/** Exports all open edges of a surface mesh to file. This is used mostly
 * for graphical error checking.
 *
\param SurfaceHandle int Handle to the surface on which the operation is to be performed.
\param FileName char Filename to which the edges are to be exported.
\ingroup LuaSurfaceMesh
\author Jan*/
int CHI_LUA::chiSurfaceMeshExtractOpenEdgesToObj(int SurfaceHandle, char FileName)
{return;} 
/** Builds sweep ordering for a number of angles and checks whether any
 * cyclic dependencies are encountered.
 *
\param SurfaceHandle int Handle to the surface on which the operation is to be performed.
\param NumAngles int Number of azimuthal angles to use for checking cycles.
\ingroup LuaSurfaceMesh
\author Jan*/
int CHI_LUA::chiSurfaceMeshCheckCycles(int SurfaceHandle, int NumAngles)
{return;} 
/** Splits a SurfaceMesh by patch.
 *
\param SurfaceHandle int Handle to the surface on which the operation is to be performed.
\return Handle int Handle to the patch collection.
\return Count int Number of patches found.
\ingroup LuaSurfaceMesh
\author Jan*/
int CHI_LUA::chiSurfaceMeshSplitByPatch(int SurfaceHandle)
{return;} 
/** Gets a list of edge loops for the given surface mesh.
 *
\param SurfaceHandle int Handle to the surface on which the operation is to be performed.
\return Handle int Handle to the edge loops.
\return Count int Number of edge loops found.
\ingroup LuaSurfaceMesh
\author Jan*/
int CHI_LUA::chiSurfaceMeshGetEdgeLoops(int SurfaceHandle)
{return;} 
/** Gets a list of edge loops for the given surface mesh's polygon faces.
 *
\param SurfaceHandle int Handle to the surface on which the operation is to be performed.
\return Handle int Handle to the edge loops.
\return Count int Number of edge loops found.
\ingroup LuaSurfaceMesh
\author Jan*/
int CHI_LUA::chiSurfaceMeshGetEdgeLoopsPoly(int SurfaceHandle)
{return;} 
/** \defgroup LuaLogicVolumes Logical Volumes
 * \ingroup LuaMesh*/
/** Creates a logical volume.
\param TypeIndex int Volume type.
\param Values varying Parameters.
##_
###TypeIndex\n
SPHERE_ORIGIN =  Sphere at the origin. [Requires: R]\n
SPHERE  =  Sphere at user supplied location. [Requires: x,y,z,R]\n
RPP=  Rectangular ParalleliPiped. [Requires: xmin,xmax,ymin,ymax,zmin,zmax]\n
RCC=  Right Circular Cylinder. [Requires: x0,y0,z0, vx,vy,vz and R]\n
SURFACE= Logical volume determined from a surface mesh. [Requires: a handle
    to a surface mesh]\n
BOOLEAN= Boolean combination of other volumes.
 [Requires pairs of values: bool,volumeHandle]\n
\return Handle int Handle to the created logical volume.
\ingroup LuaLogicVolumes
\author Jan*/
int CHI_LUA::chiLogicalVolumeCreate(int TypeIndex, varying Values)
{return;} 
/** \defgroup LuaRegion Regions
 * \ingroup LuaMesh
 */
/** Creates a new region mesh.
\return Handle int Handle to the created region.
\ingroup LuaRegion
\author Jan*/
int CHI_LUA::chiRegionCreate()
{return;} 
/** Obtains a handle to the surface mesh associated with a boundary
\param RegionHandle int Handle to the region for which boundary is to be added.
\param BoundaryNumber int Index of the boundary for which the mesh is to be obtained.
\param ContinuumNumber int Optional. If supplied then the surface mesh for the given con
 tinuum will be used
\return SurfaceMeshHandle int. Handle to the surface mesh extracted.
\ingroup LuaRegion
\author Jan*/
int CHI_LUA::chiRegionGetBoundarySurfaceMesh(int RegionHandle, int BoundaryNumber, int ContinuumNumber)
{return;} 
/** Exports the mesh to python.
\param RegionHandle int Handle to the region for which boundary is to be added.
\param FileName char Name of the file to be used.
\param ExportTemplate bool Default: False. Flag indicating whether to export
                     the extruder's surface mesh template.
\ingroup LuaRegion
\author Jan*/
int CHI_LUA::chiRegionExportMeshToPython(int RegionHandle, char FileName, bool ExportTemplate)
{return;} 
/** Exports the mesh to obj format.
\param RegionHandle int Handle to the region for which boundary is to be added.
\param FileName char Name of the file to be used.
\param ExportByMaterial bool Default: False. Flag indicating whether to export
                     the extruder's surface mesh by material.
\ingroup LuaRegion
\author Jan*/
int CHI_LUA::chiRegionExportMeshToObj(int RegionHandle, char FileName, bool ExportByMaterial)
{return;} 
/** Exports the mesh to vtu format.
\param RegionHandle int Handle to the region for which boundary is to be added.
\param FileName char Name of the file to be used.
\ingroup LuaRegion
\author Jan*/
int CHI_LUA::chiRegionExportMeshToVTK(int RegionHandle, char FileName)
{return;} 
/** Adds a surface mesh boundary to the region
\param RegionHandle int Handle to the region for which boundary is to be added.
\param SurfaceHandle int Handle to the surface mesh.
\return BoundaryNumber int. Number of the boundary added to the region.
\ingroup LuaRegion
\author Jan*/
int CHI_LUA::chiRegionAddSurfaceBoundary(int RegionHandle, int SurfaceHandle)
{return;} 
/** Adds a line mesh boundary to the region
\param RegionHandle int Handle to the region for which boundary is to be added.
\param LineMeshHandle int Handle to the line mesh.
\return BoundaryNumber int. Number of the boundary added to the region.
\ingroup LuaRegion
\author Jan*/
int CHI_LUA::chiRegionAddLineBoundary(int RegionHandle, int LineMeshHandle)
{return;} 
/** \defgroup LuaMeshHandler Mesh Handler
 * \ingroup LuaMesh
*/
/** Creates a mesh handler and sets it as "current".
\return Handle int Handle to the created mesh handler.
\ingroup LuaMeshHandler
\author Jan*/
int CHI_LUA::chiMeshHandlerCreate()
{return;} 
/** Sets the given mesh handler as "current".
\param HandlerHandler int Handle to the mesh handler previously created
       with a call to chiMeshHandlerCreate.
\ingroup LuaMeshHandler
\author Jan*/
int CHI_LUA::chiMeshHandlerSetCurrent(int HandlerHandler)
{return;} 
/** \defgroup LuaMeshHandler Mesh Handler
 * \ingroup LuaMesh
*/
/** Gets an index to a surface from a SurfaceMeshCollection.
 *
\param CollectionHandle int Handle to the SurfaceMeshCollection
\param SurfaceIndex int Index of the SurfaceMesh in the collection.
\return Handle int Handle to the extracted SurfaceMesh.
\ingroup LuaMeshHandler
\author Jan*/
int CHI_LUA::chiMeshHandlerGetSurfaceFromCollection(int CollectionHandle, int SurfaceIndex)
{return;} 
/** \defgroup LuaLineMesh Line Meshes
 * \ingroup LuaMesh
*/
/** Creates a new line mesh from a lua array.
 *
\param Table LuaTable A lua table containing all the vertices of the mesh.
## Example
\code
mesh={}
mesh[1] = {0.1,0.001}
mesh[2] = {0.2,0.001,0.003}
line_mesh = chiLineMeshCreateFromArray(mesh)
\endcode
\return Handle int Handle to the created line mesh.
\ingroup LuaLineMesh
\author Jan*/
int CHI_LUA::chiLineMeshCreateFromArray(LuaTable Table)
{return;} 
/** \defgroup LuaLineMesh Line Meshes
 * \ingroup LuaMesh
*/
/** Creates a new line mesh from a loop.
 *
\param LoopCollectionHandle int Handle to the Loop collection.
\param LoopHandle int Handle to the loop inside the collection.
\return Handle int Handle to the created line mesh.
\ingroup LuaLineMesh
\author Jan*/
int CHI_LUA::chiLineMeshCreateFromLoop(int LoopCollectionHandle, int LoopHandle)
{return;} 
/**Exports the first available surface mesh to a wavefront .obj file.
 * This would be the surface mesh associated with the last mesh operation.
\ingroup LuaSurfaceMesher
 * */
int CHI_LUA::chiSurfaceMesherExportToObj()
{return;} 
/** Sets a property of a surface mesher.
\param PropertyNumber int Handle of the property to be set.
\param PropertyValue varying Value of the property.
Properties:\n
 MAX_AREA = Area constraint.\n
 PARTITION_X   = Number of partitions in X.\n
 PARTITION_Y   = Number of partitions in Y.\n
 CUT_X = Adds a cut at the given x-value.\n
 CUT_Y = Adds a cut at the given y-value.
\ingroup LuaSurfaceMesher
\author Jan*/
int CHI_LUA::chiSurfaceMesherSetProperty(int PropertyNumber, varying PropertyValue)
{return;} 
/** Executes the surface meshing pipeline.
\param ExportLoadBalance bool Optional flag indicating whether to write
                              xy-partition load factors to log. Default=false
\ingroup LuaSurfaceMesher
\author Jan*/
int CHI_LUA::chiSurfaceMesherExecute(bool ExportLoadBalance)
{return;} 
/** \defgroup LuaSurfaceMesher Surface Re-meshers
 * \ingroup LuaMesh
 *
 * chi_mesh::SurfaceMesherDelaunay
*/
/** Creates a new surface mesher remeshing.
 *
\param Type int Surface Remesher type.
Remesher types:\n
 SURFACEMESHER_PREDEFINED = No remeshing is performed.\n
 SURFACEMESHER_DELAUNAY   = Delaunay surface remesher.\n
 SURFACEMESHER_TRIANGLE   = Triangle surface remesher.
\ingroup LuaSurfaceMesher
\author Jan*/
int CHI_LUA::chiSurfaceMesherCreate(int Type)
{return;} 
/** \defgroup LuaVolumeMesher Volume Meshers
 * \ingroup LuaMesh
 *
 * ## General Concepts
 *
 * A volume mesher generates cells (chi_mesh::Cell) which can be
 * either 2D polygons (chi_mesh::CellPolygon) or 3D polyhedrons
 * (chi_mesh::CellPolyhedron). All cell objects are pushed into
 * a vector located in a chi_mesh::MeshContinuum after creation.
 * Right now only a single continuum can be operated on and this is normally
 * by means of attaching a region to a solver. \n
 *
 * \n
 * Right now 2D meshes can be partitioned but the full 2D cell geometry
 * exists on each processor. This is mostly because of the way the extruder
 * works. This means that for a 2D problem a continuum will have ALL of the
 * cells (as fully defined cells), in every process, in the member
 * vector "cells" of the continuum.
 * The same can not be said for 3D extruded meshes where each process has all
 * the nodes but if cells are not local then only placeholders are uploaded.
 * Placeholders are basically the base class chi_mesh::Cell and contains only
 * the cell's partition_id and its centroid. The concept that these placeholders
 * are uploaded allows a sweeping order to figure out dependencies. A similar
 * strategy would have to be devised for using third-party meshes.\n
 *
 * \n
 * Global mesh references are maintained in chi_mesh::MeshContinuum::cells.
 * This contains the actual mesh object. Local indices are stored in
 * chi_mesh::MeshContinuum::local_cell_glob_indices and are the global indices
 * of local cells. Conversely the local indices, given a global index,
 * are stored in chi_mesh::MeshContinuum::glob_cell_local_indices.
 *
 * ## Extruder Mesher
*/
/** Creates a new volume mesher.
 *
\param Type int Volume Remesher type.
Remesher types:\n
 VOLUMEMESHER_LINEMESH1D = Creates 1D slab cells from a linemesh.\n
 VOLUMEMESHER_PREDEFINED2D = No remeshing is performed.\n
 VOLUMEMESHER_EXTRUDER = Extruder the first surface mesh found.\n
\ingroup LuaVolumeMesher
\author Jan*/
int CHI_LUA::chiVolumeMesherCreate(int Type)
{return;} 
/** Executes the volume meshing pipeline.
\ingroup LuaVolumeMesher
\author Jan*/
int CHI_LUA::chiVolumeMesherExecute()
{return;} 
/** Sets a volume mesher property.
\param PropertyIndex int Index of the property to change. See below
\param PropertyValue varying Value of the property.
##_
###PropertyIndex:
 FORCE_POLYGONS = <B>PropertyValue:[bool]</B> Forces the 2D Meshing to use
                  polygon cells even if the
 underlying surface mesh is triangles. Expects a boolean value.\n
 EXTRUSION_LAYER = <B>PropertyValue:[double,(int),(char)]</B> Adds a layer to the
                   extruder volume mesher if it exists.
                   Expects 1 required parameter, the layer height, followed by 2 optional
                   parameters: number of subdivisions (defaults to 1), and layer id (char)(defaults
                   to nothing).\n
 MESH_GLOBAL = <B>PropertyValue:[bool]</B> Generate/Read the full mesh at each
               location. Expects a boolean value [Default=true].\n
 PARTITION_Z = <B>PropertyValue:[int]</B> Sets the pz partitioning parameters
                 for the z direction.\n
 MATID_FROMLOGICAL = <B>LogicalVolumeHandle:[int],Mat_id:[int],
                     Sense:[bool](Optional, default:true)</B> Sets the material
                     id of cells that meet the sense requirement for the given
                     logical volume.
\ingroup LuaVolumeMesher
\author Jan*/
int CHI_LUA::chiVolumeMesherSetProperty(int PropertyIndex, varying PropertyValue)
{return;} 
/** Initialize interpolator.
 *
\param FFIHandle int Handle to the field function interpolation.
\ingroup LuaFFInterpol
\author Jan*/
int CHI_LUA::chiFFInterpolationInitialize(int FFIHandle)
{return;} 
/** Execute interpolator.
 *
\param FFIHandle int Handle to the field function interpolation.
\ingroup LuaFFInterpol
\author Jan*/
int CHI_LUA::chiFFInterpolationExecute(int FFIHandle)
{return;} 
/** Gets the value(s) associated with an interpolation.
 *
\param FFIHandle int Handle to the field function interpolation.
###Note:
Currently only the Volume interpolation supports obtaining a value.
\ingroup LuaFFInterpol
\author Jan*/
int CHI_LUA::chiFFInterpolationGetValue(int FFIHandle)
{return;} 
/** \defgroup LuaFFInterpol Field Function Interpolation
 * \ingroup LuaMesh
*/
/** Creates a new field function interpolation.
 *
\param FFITypeIndex int Type of field function interpolation.
##_
###FFITypeIndex\n
SLICE           = Two dimensional slice of the mesh. \n
LINE            = Line defined by two points.\n
VOLUME          = Volume either referring to the entire volume or that of a
                  logical volume assigned to the interpolator.\n
\return Handle int Handle to the created interpolation.
\ingroup LuaFFInterpol
\author Jan*/
int CHI_LUA::chiFFInterpolationCreate(int FFITypeIndex)
{return;} 
/** Creates a new field function interpolation.
 *
\param FFIHandle int Handle to the field function interpolation.
\param PropertyIndex int Type of property to set.
##_
###PropertyIndex\n
ADD_FIELDFUNCTION     = Add field function to interpolation.\n
SLICE_POINT           = Reference point for SLICE type FFIs.\n
SLICE_NORMAL          = Normal of slice plane.\n
SLICE_TANGENT         = Tangent vector of slice plane.\n
SLICE_BINORM          = Binorm vector of slice plane.\n
LINE_FIRSTPOINT   = Line start point.\n
LINE_SECONDPOINT  = Line end point.\n
LINE_NUMBEROFPOINTS = Number of points to put in the line interpolator.
                          Minimum 2.\n
OPERATION  =  Some interpolations support operation types. See OpTypes.\n
LOGICAL_VOLUME = To be followed by a handle to a logical volume to be
                 used by the interpolator.\n
###OpTypes
OP_SUM\n
For volume interpolations, computes the volume integral.\n
\n
OP_AVG\n
For volume interpolations, computes the volume average.\n
\return Handle int Handle to the created interpolation.
\ingroup LuaFFInterpol
\author Jan*/
int CHI_LUA::chiFFInterpolationSetProperty(int FFIHandle, int PropertyIndex)
{return;} 
/** Export interpolation to python contour plot.
 *
\param FFIHandle int Handle to the field function interpolation.
\param BaseName char Base name to be used for exported files.
\ingroup LuaFFInterpol
\author Jan*/
int CHI_LUA::chiFFInterpolationExportPython(int FFIHandle, char BaseName)
{return;} 
/** Receive mesh from parent process.
\ingroup chiMPI
\author Jan*/
int CHI_LUA::chiMPIReceiveCellsets()
{return;} 
/** \defgroup chiMPI E MPI Utilities
## Lua available variables
- *chi_location_id* - (int) Process number for current process
- *chi_number_of_processes* - (int) Total number of processes
 * */
/** Broadcasts mesh to all child processes.
\ingroup chiMPI
\author Jan*/
int CHI_LUA::chiMPIBroadcastCellsets()
{return;} 
/** Blocks until all processes in the communicator have reached this routine.
\ingroup chiMPI
\author Jan*/
int CHI_LUA::chiMPIBarrier()
{return;} 
/** \defgroup LuaLogging D Output and Logging
 * \ingroup LuaUtilities*/
/** Sets the verbosity level of the Logger.
 * This lua command will overwrite the currently set value.
\param int_level int Integer denoting verbosity level. Can be 0,1 or 2
 [default:0]
\ingroup LuaLogging
\author Jan*/
int CHI_LUA::chiLogSetVerbosity(int int_level)
{return;} 
/**Logs a message depending on the log type specified.
\param LogType int Can be any of the log types specified below.
##_
### LogType
LOG_0\n
Write a log only if location 0.\n
LOG_0WARNING\n
Write a log only if location 0 and format it as a warning.\n
LOG_0ERROR\n
Write a log only if location 0 and format it as an error.\n
LOG_0VERBOSE_0\n
Same as LOG_0.\n
LOG_0VERBOSE_1\n
Write a log only if location 0 and the verbosity level is greater
or equal to 1.\n
LOG_0VERBOSE_2\n
Write a log only if location 0 and the verbosity level is greater
or equal to 1.\n
LOG_ALL, LOG_ALLWARNING, LOG_ALLERROR,\n
LOG_ALLVERBOSE_0, LOG_ALLVERBOSE_1, LOG_ALLVERBOSE_2\n
Has the same meaning as their LOG_0 counterparts but instead applies to
all locations in the parallel context.
\ingroup LuaLogging
\author Jan
*/
int CHI_LUA::chiLog(int LogType)
{return;} 
/** \defgroup LuaPhysicsMaterials Materials
 * \ingroup LuaPhysics*/
/** Adds a material to the problem. Materials are added to the global
 * physics handler and is therefore accessible across all meshes and solvers.
 *
\param Name char (Optional) Material name.
\return MaterialHandle int Handle to the created material.
##_
###Example\n
Simple example of adding a material
\code
materials = {}
materials[0] = chiPhysicsAddMaterial("Test Material");
\endcode
\ingroup LuaPhysicsMaterials
\author Jan*/
int CHI_LUA::chiPhysicsAddMaterial(char Name)
{return;} 
/** Exports a field function to VTK format.
 *
\param FFHandle int Global handle to the field function.
\param BaseName char Base name for the exported file.
\ingroup LuaFieldFunc
\author Jan*/
int CHI_LUA::chiExportFieldFunctionToVTK(int FFHandle, char BaseName)
{return;} 
/** Exports all the groups in a field function to VTK format.
 *
\param FFHandle int Global handle to the field function.
\param BaseName char Base name for the exported file.
\ingroup LuaFieldFunc
\author Jan*/
int CHI_LUA::chiExportFieldFunctionToVTKG(int FFHandle, char BaseName)
{return;} 
/** Adds a region to a solver.
\ingroup LuaSolver
\author Jan*/
int CHI_LUA::chiSolverExecute()
{return;} 
/** Adds a field function to a solver.
 *
\param SolverHandle int Handle to the solver.
\param Name char String name for the field function.
\return FFHandle int Global Handle to the field function.
\ingroup LuaSolver
\author Jan*/
int CHI_LUA::chiSolverAddFieldFunction(int SolverHandle, char Name)
{return;} 
/** Adds a material property to a material.
 *
\param MaterialHandle int Index to the reference material.
\param PropertyIndex int Property index.
##_
###PropertyIndex\n
THERMAL_CONDUCTIVITY\n
 Basic material thermal property.\n\n
SCALAR_VALUE\n
 Simple scalar value property.\n\n
TRANSPORT_XSECTIONS\n
 Multi-group transport cross-section supporting numerous features.\n\n
ISOTROPIC_MG_SOURCE\n
 Isotropic Multigroup Source.\n\n
### Developer Info
Checklist for adding a new material property:
 - Create your property class in its own header file. i.e.
   "CHI_PHYSICS/CHI_PHYSICSMATERIAL/property_xx_myproperty.h"
 - Add the property to the physics namespace
   ("CHI_PHYSICS/chi_physics_namespace.h"). Make sure to derive from the base
   class.
 - Go define the integer to be associated with your new property in
   chi_physicsmaterial.h
 - Include the header file for your property in this file (i.e. at the top).
 - Add this property integer in the lua register (CHI_LUA/chi_lua_register.h).
   For testing you can just use the integer value but eventually you'd want
   to supply an easier way for users to enter it.
 - Add another else-if for your property. Just have a look at how the others
   were done, it should be intuitive enough.
\ingroup LuaPhysicsMaterials
\author Jan*/
int CHI_LUA::chiPhysicsMaterialAddProperty(int MaterialHandle, int PropertyIndex)
{return;} 
/** Sets a material property for a given material.
 *
\param MaterialHandle int Index to the reference material.
\param PropertyIndex int Property index.
\param OperationIndex int Method used for setting the material property.
\param Information varying Varying information depending on the operation.
##_
###PropertyIndex\n
THERMAL_CONDUCTIVITY =  Basic material thermal property.\n
SCALAR_VALUE         =  Basic Scalar value property.\n
TRANSPORT_XSECTIONS   =  Multi-group transport cross-section supporting numerous
                        features.\n
ISOTROPIC_MG_SOURCE = Isotropic Multigroup Source.\n
###OperationIndex\n
SINGLE_VALUE\n
Sets the property based on a single value. Requires a single value as additional
information. As a simple example consider the case where the user would like
to set a single constant thermal conductivity. This can be achieved with \n
FROM_ARRAY\n
Sets a property based on a Lua array indexed from 1 to N. Internally
will be converted to 0 to N-1. This method can be used to set mutligroup
cross-sections or sources.
\n
SIMPLEXS0\n
Makes a simple material with no transfer matrix just \f$\sigma_t \f$. Expects two
values: \n
 - int number of groups \f$G \f$,
 - float \f$\sigma_t \f$.
####_
SIMPLEXS1\n
Makes a simple material with isotropic transfer matrix (L=0)
and mostly down scattering but with a few of the last groups
subject to up-scattering. Expects three values
values: \n
 - int number of groups (\f$G \f$),
 - float \f$\sigma_t \f$,
 - float scattering to total ratio (\f$c \f$)
####_
PDT_XSFILE\n
Loads transport cross-sections from PDT type cross-section files. Expects
to be followed by a filepath specifying the xs-file. By default this routine
will attempt to build a transfer matrix from reaction type MT2501, however,
an additional text field can be supplied specifying the transfer matrix to
 use.
\code
chiPhysicsMaterialSetProperty(materials[1],
                              TRANSPORT_XSECTIONS,
                              PDT_XSFILE,
                              "xs_3_170.data",
                              "2518")
\endcode
##_
### Example 1
Simple temperature independent thermal conductivity:
\code
materials = {}
materials[1] = chiPhysicsAddMaterial("Test Material");
chiPhysicsMaterialAddProperty(materials[0],THERMAL_CONDUCTIVITY)
chiPhysicsMaterialSetProperty(materials[0],THERMAL_CONDUCTIVITY,SINGLE_VALUE,13.7)
\endcode
where the thermal conductivity has been set to 13.7.\n
### Example 2
Isotropic Multigroup source set from a lua table/array (12 groups):
\code
materials = {}
materials[1] = chiPhysicsAddMaterial("Test Material");
chiPhysicsMaterialAddProperty(materials[1],ISOTROPIC_MG_SOURCE)
num_groups = 12
src={}
for g=1,num_groups do
    src[g] = 0.0
end
chiPhysicsMaterialSetProperty(materials[1],ISOTROPIC_MG_SOURCE,FROM_ARRAY,src)
\endcode
### Developer Info
Checklist for adding a new material property:
 - Make sure you followed the steps depicted in the developer info section for
   the CHI_LUA::chiPhysicsMaterialAddProperty function.
 - Now under the "If user supplied name then find property index"-section
   add the appropriate code for setting the property index.
 - Add an else-if block for your property similar to the others. It should be
   intuitive if you look at the others.
 - Remember to add the filtering section if you need to support multiple type
   properties.
\ingroup LuaPhysicsMaterials
\author Jan*/
int CHI_LUA::chiPhysicsMaterialSetProperty(int MaterialHandle, int PropertyIndex, int OperationIndex, varying Information)
{return;} 
/**Obtains a named list of the field functions associated with a solver.
 *
 * \param SolverHandle int A handle to the reference solver.
 \ingroup LuaSolver */
int CHI_LUA::chiGetFieldFunctionList(SolverHandle \param)
{return;} 
/** \defgroup LuaSolver Solvers
 * \ingroup LuaPhysics*/
/** Adds a region to a solver.
 *
\param SolverHandle int Handle to the solver.
\param RegionHandle int Handle to the region.
\ingroup LuaSolver
\author Jan*/
int CHI_LUA::chiSolverAddRegion(int SolverHandle, int RegionHandle)
{return;} 
/** Creates a MonteCarlon solver.
\return Handle int Handle to the created solver.
\ingroup LuaMonteCarlon
\author Jan*/
int CHI_LUA::chiMonteCarlonCreateSolver()
{return;} 
/** Creates a simple point source at [0 0 0].
 *
\param SolverHandle int Handle to an existing montecarlo solver.
\param SourceType int Source type identifier. See SourceType below.
##_
###PropertyIndex\n
BOUNDARY_SOURCE\n
 Source on a surface boundary. Expects to be followed by the boundary number.\n\n
\return Handle int Handle to the created source.
\ingroup LuaMonteCarlon
\author Jan*/
int CHI_LUA::chiMonteCarlonCreateSource(int SolverHandle, int SourceType)
{return;} 
/** Creates a MonteCarlon solver.
\param SolverHandle int Handle to the montecarlo solver
\ingroup LuaMonteCarlon
\author Jan*/
int CHI_LUA::chiMonteCarlonInitialize(int SolverHandle)
{return;} 
/** Executes a MonteCarlon solver.
\param SolverHandle int Handle to the montecarlo solver.
\param PropertyIndex int Code for a specific property.
##_
###PropertyIndex\n
MC_NUM_PARTICLES\n
 Number of particles to run. Expects to be followed by an integer specifying
 the amount of particles to run. Default 1000.\n\n
MC_TFC_UPDATE_DIV\n
 Number of divisions of the number of particles to use for tally fluctuation
 chart (TFC) update. Expects to be followed by an integer specifying the number
 of bins. Default 10.\n\n
MC_MONOENERGETIC\n
 Forces the scattering out of a group to be treated like absorbtion.
 Expects to be followed by a boolean value. Default false.\n\n
MC_SCATTERING_ORDER\n
 Sets the scattering order used for building discrete scattering angles.
 Expect to be followed by an integer specifying the order. Default 10.
 Note: when this number is set greater than the scattering order available
 in the provided cross-sections then the scattering order will default to that
 available.\n\n
MC_FORCE_ISOTROPIC\n
 Flag forcing isotropic scattering. Expects to be followed by a boolean value.
 Default false.\n\n
MC_TALLY_MULTIPLICATION_FACTOR\n
 Classical global tally multiplication factor to be applied after normalization
 per source particle. Expects to be followed by a float. Default 1.0.\n\n
\ingroup LuaMonteCarlon
\author Jan*/
int CHI_LUA::chiMonteCarlonSetProperty(int SolverHandle, int PropertyIndex)
{return;} 
/**\defgroup LuaMonteCarlon Monte Carlo N-particle
 * \ingroup LuaModules*/
/** Executes a MonteCarlon solver.
\param SolverHandle int Handle to the montecarlo solver
\ingroup LuaMonteCarlon
\author Jan*/
int CHI_LUA::chiMonteCarlonExecute(int SolverHandle)
{return;} 
/** Sets a property of a Diffusion solver. Please also consult the whitepaper
 * for the Diffusion solver (<a
 * href="../../whitepages/DiffusionSolver/DiffusionSolver.pdf">
 * Diffusion Whitepaper</a>)
\param SolverHandle int Handle to an existing diffusion solver.
\param PropertyIndex int Code for a specific property.
\param Values varying Number of inputs associated with the index.<br>
##_
###PropertyIndex\n
DISCRETIZATION_METHOD\n
 Discretization method. Expects to be followed by <B>DiscretizationMethod</B>
  (see below).\n\n
MAX_ITERS\n
 Solver maximum number of iterations.\n\n
RESIDUAL_TOL\n
 Residual tolerance. Expects to be followed by a floating point
 value (i.e. 1.0e-6).\n\n
BOUNDARY_TYPE\n
 Boundary type. Expects boundary index then <B>BoundaryTypeIndex</B>
 then type value.\n\n
PROPERTY_D_MAP\n
 Followed by an integer, sets the property index of a material
 from where the solver will collect the diffusion coefficient.\n\n
PROPERTY_Q_MAP\n
 Followed by an integer, sets the property index of a material
 from where the solver will collect the volumetric source value.\n\n
PROPERTY_SIGMAA_MAP\n
 Followed by an integer, sets the property index of a material
 from where the solver will collect the absorbtion cross-section
                 \f$ \sigma_a \f$.\n\n
\code
chiDiffusionSetProperty(solver,BOUNDARY_TYPE,2,DIFFUSION_DIRICHLET,1.0)
\endcode
###DiscretizationMethod\n
 PWLC\n
 Piecewise Linear Finite Element Continuous.\n\n
 PWLD_MIP\n
 Piecewise Linear Finite Element Discontinuous using the Modified
            Interior Penalty (MIP) method.\n\n
### BoundaryTypeIndex
DIFFUSION_REFLECTING
 Reflecting boundary conditions. Synonymous with Neumann with a
 derivative of 0.0.
             \f[ -D \hat{n}\cdot \nabla \phi = 0 \f]\n\n
DIFFUSION_DIRICHLET\n
 Constant value boundary condition.
 Expects to be followed by a value \f$ f \f$ associated with \f$ \phi \f$.
            \f[ \phi = f \f]\n\n
DIFFUSION_NEUMANN\n
 Constant derivative boundary condition. Expects to be followed
 by a constant \f$ f \f$ representing
                    \f[ -D \hat{n}\cdot \nabla \phi = f \f]\n\n
DIFFUSION_VACUUM\n
 Vacuum boundary conditions. More appropriate to neutron diffusion.
   \f[ \frac{1}{4}\phi + \frac{1}{2} D \hat{n}\cdot \nabla \phi = 0 \f]\n\n
DIFFUSION_ROBIN\n
 Robin boundary condition of the form
                   \f[ a \phi + b D \hat{n}\cdot \nabla \phi = f \f]\n\n
\ingroup LuaDiffusion
\author Jan*/
int CHI_LUA::chiDiffusionSetProperty(int SolverHandle, int PropertyIndex, varying Values)
{return;} 
/** \defgroup LuaDiffusion Diffusion
 * \ingroup LuaModules
 *
 *
 * Please consult the whitepaper for this solver (<a
 * href="../../whitepages/DiffusionSolver/DiffusionSolver.pdf">
 * Diffusion Whitepaper</a>). This solver solves the general diffusion equation
 * of the form
 *
 * \f{equation}{
 * -\nabla D \nabla \phi + \sigma_a \phi = q.
 * \f}
 *
 * Given a discretization method this solver will assemble the matrix \f$ A \f$
 * using
 * a system of linear equations. The solver can operate on 1D slabs, 2D polygon meshes
 * and 3D polyhedron meshes. Currently two spatial discretization schemes are
 * supported, Piecewise Linear Continous (PWLC) and
 * Piecewise Linear Discontinous (PWLD) using the Modified Interior
 * Penalty (MIP) method. The solver is fully parallel (using
 * PETSc).
 *
 * Boundary conditions are specified by referencing unique boundary id's. i.e.
 * assuming one uses the extruder mesher the template boundary would've been
 * assigned to index 0 and this will be transfused to all the boundaries in the
 * lateral periphery. The top and bottom boundaries are flat for extruded
 * geometries and therefore are assigned their own id's. In the extruded case
 * the last boundary index is always assigned to the top boundary and
 * second-to-last boundary index is always assigned to the bottom boundary. Boundary
 * types are specified using the CHI_LUA::chiDiffusionSetProperty function call,
 * using the BOUNDARY_TYPE property index.
 *
 * The materials and source values are for now obtained from materials
 * associated with cells. The default property mapping is shown below. If
 * the property at index [1] (which is mapped to the source value q) is not
 * available the source will default to a constant value of 1.0.
 *
 *  \image html "DiffusionMatProp.png" width=500px
 *
 * To change the mapping of the properties the user needs to make a call to
 * CHI_LUA::chiDiffusionSetProperty using the PROPERTY_D_MAP, PROPERTY_Q_MAP or
 * PROPERTY_SIGMAA_MAP property index.
 *
 * By default the solver populates a scalar field function which is the solution
 * \f$ \phi \f$.
 *
 * */
/** Creates a Diffusion solver.
\return Handle int Handle to the created solver.
\ingroup LuaDiffusion
\author Jan*/
int CHI_LUA::chiDiffusionCreateSolver()
{return;} 
/** Initialize the Diffusion solver.
 *
\param SolverHandle int Handle to an existing diffusion solver.
\return Success bool Returns if initialization failed.
\ingroup LuaDiffusion
\author Jan*/
int CHI_LUA::chiDiffusionInitialize(int SolverHandle)
{return;} 
/** Initialize the Diffusion solver.
 *
\param SolverHandle int Handle to an existing diffusion solver.
\return Success bool Returns if initialization failed.
\ingroup LuaDiffusion
\author Jan*/
int CHI_LUA::chiDiffusionExecute(int SolverHandle, int SolverHandle)
{return;} 
/**Initializes the solver.
\param SolverIndex int Handle to the solver.
 \ingroup LuaNPT
 */
int CHI_LUA::chiNPTInitialize(int SolverIndex)
{return;} 
/** \defgroup LuaNPT Neutral Particle Transport
 * \ingroup LuaModules*/
/**Creates a Neutral Particle Transport solver.
\return SolverHandle int Handle to the solver created.
\code
\endcode
\ingroup LuaNPT
 */
int CHI_LUA::chiNPTransportCreateSolver()
{return;} 
/**Obtains a list of field functions from the transport solver.
 *
\param SolverIndex int Handle to the solver for which the list is to be obtained.
\return table,count Returns an array of handles and the amount of elements in
        it (indexed from 1).
\ingroup LuaNPT
\author Jan*/
int CHI_LUA::chiNPTGetFieldFunctionList(int SolverIndex)
{return;} 
/**Obtains a list of field functions, related only to scalar flux,
from the transport solver.
\param SolverIndex int Handle to the solver for which the list is to be obtained.
\return table,count Returns an array of handles and the amount of elements in
        it (indexed from 1).
\ingroup LuaNPT
\author Jan*/
int CHI_LUA::chiNPTGetScalarFieldFunctionList(int SolverIndex)
{return;} 
///**Create an empty material.
//\param SolverIndex int Handle to the solver for which the material
// is to be created.
//\ingroup LuaNPT
//*/
int CHI_LUA::chiNPTCreateMaterial(int SolverIndex)
{return;} 
///**Set the material as a pure absorber.
//\param SolverIndex int Handle to the solver for which the material
// is to be created.
//\param MaterialIndex int Handle to the material in question.
//\param NumberOfGroups int Number of groups for the material.
//\param ScatOrder int Maximum scattering order of the material.
//\param Sigma_t=1.0 double (Optional) Total cross-section to be used.
//\ingroup LuaNPT
//*/
int CHI_LUA::chiNPTMaterialSetPureAbsorber(int SolverIndex, int MaterialIndex, int NumberOfGroups, int ScatOrder, double Sigma_t=1.0)
{return;} 
/**Set NPT property.
\param SolverIndex int Handle to the solver for which the set is to be created.
\param PropertyIndex int Code for a specific property.
##_
###PropertyIndex\n
DISCRETIZATION_METHOD\n
 Discretization method.\n\n
PARTITION_METHOD\n
 Multi-processor partitioning method.\n\n
BOUNDARY_CONDITION\n
 Boundary condition type. See BoundaryIdentify.\n\n
GROUPSET_ITERATIVEMETHOD\n
 Iterative method to be used by a given groupset. Expects to be followed
 by the groupset handle and IterativeMethod.\n\n
GROUPSET_TOLERANCE\n
 Either Residual or pointwise tolerance to use for iterative method. Expects
 to be followed by the groupset handle and a float. Default is 1.0e-6\n\n
GROUPSET_MAXITERATIONS\n
 Maximum iterations for groupset solve. Exepects to be followed by the groupset
 handle and an integer. Default is 1000.\n\n
GROUPSET_GMRESRESTART_INTVL\n
 Number of GMRES iterations to accumulate Krylov vectors before restarting
 the accumulation. Default 10.\n\n
GROUPSET_SUBSETS\n
 Number of subsets to use for groupset. Default 1. Expects to be followed by
 groupset handle and integer amount of subsets.\n\n
GROUPSET_WGDSA\n
 Expects to be followed by a boolean flag. If true then Within-Group
 Diffusion Synthetic Acceleration will be applied. Default false.\n\n
GROUPSET_TGDSA\n
 Expects to be followed by a boolean flag. If true then Two-Grid
 Diffusion Synthetic Acceleration will be applied. Default false.\n\n
SCATTERING_ORDER\n
 Defines the level of harmonic expansion for the scattering source.Default 1.
 Expects to be followed by an integer.\n\n
SWEEP_EAGER_LIMIT\n
 The eager limit to be used in message size during sweep initialization.
 This expects to be followed by a size in bytes (Max 64,0000).Default 32,000.
 See note below.\n\n
###Discretization methods
 PWLD2D = Piecewise Linear Finite Element 2D.\n
 PWLD3D = Piecewise Linear Finite Element 3D.
###Partitioning methods
 SERIAL = No multi-processing.\n
 FROM_SURFACE = Same partitioning as used on Surface mesh.
###BoundaryIdentify
This value follows the argument BOUNDARY_CONDITION and identifies which
boundary is under consideration. Right now only boundaries aligned with
cartesian axes are considered. Followed by NPTBoundaryType.\n
XMAX = Right boundary \n
XMIN = Left boundary \n
YMAX = Front boundary \n
YMIN = Back boundary \n
ZMAX = Top boundary \n
ZMIN = Bottom boundary \n
###NPTBoundaryType
Specifies the type of boundary. Depending on the type this argument needs
to be followed by one or more values. Note: By default all boundaries are
type VACUUM.\n
\n
VACUUM\n
Specifies a vaccuum boundary condition. It is not followed by any value.\n
\n
\n
INCIDENT_ISOTROPIC\n
Incident isotropic flux. This argument needs to be followed by a lua table
index 1 to G where G is the amount of energy groups. Note internally this
is mapped as 0 to G-1.
###IterativeMethod
NPT_CLASSICRICHARDSON\n
Classic richardson iteration or otherwise known as source iteration.\n
\n
NPT_GMRES\n
Generalized Minimized Residual. Very robust method for converging solutions.\n
###Note on the Eager limit
The eager limit is the message size limit before which non-blocking MPI send
calls will execute without waiting for a matching receive call. The limit is
platform dependent but in general 64 kb. Some systems have 32 kb as a limit
and therefore we use that as a default limit in ChiTech. There is a fine
interplay between message size and the shear amount of messages that will be
sent. In general smaller messages tend to be more efficient, however, when
there are too many small messages being sent around the communication system
on the given platform will start to suffer. One can gain a small amount of
parallel efficiency by lowering this limit, however, there is a point where
the parallel efficiency will actually get worse so use with caution.
\ingroup LuaNPT*/
int CHI_LUA::chiNPTSetProperty(int SolverIndex, int PropertyIndex)
{return;} 
/** \defgroup LuaLBSGroupsets LBS Groupsets
The code below is an example of a complete specification of a groupset.
\code
--===================================== Setup physics
phys1 = chiNPTransportCreateSolver()
chiSolverAddRegion(phys1,region1)
chiNPTSetProperty(phys1,DISCRETIZATION_METHOD,PWLD3D)
chiNPTSetProperty(phys1,SCATTERING_ORDER,1)
--========== Groups
grp = {}
for g=1,num_groups do
    grp[g] = chiNPTCreateGroup(phys1)
end
--========== ProdQuad
pquad0 = chiCreateProductQuadrature(GAUSS_LEGENDRE_CHEBYSHEV,2, 2)
pquad1 = chiCreateProductQuadrature(GAUSS_LEGENDRE_CHEBYSHEV,8, 8)
--========== Groupset def
gs0 = chiNPTCreateGroupset(phys1)
cur_gs = gs0
chiNPTGroupsetAddGroups(phys1,cur_gs,0,15)
chiNPTGroupsetSetQuadrature(phys1,cur_gs,pquad0)
chiNPTGroupsetSetAngleAggDiv(phys1,cur_gs,1)
chiNPTGroupsetSetGroupSubsets(phys1,cur_gs,1)
chiNPTGroupsetSetIterativeMethod(phys1,cur_gs,NPT_GMRES)
chiNPTGroupsetSetResidualTolerance(phys1,cur_gs,1.0e-4)
chiNPTGroupsetSetMaxIterations(phys1,cur_gs,300)
chiNPTGroupsetSetGMRESRestartIntvl(phys1,cur_gs,30)
chiNPTGroupsetSetWGDSA(phys1,cur_gs,30,1.0e-4,false," ")
chiNPTGroupsetSetTGDSA(phys1,cur_gs,30,1.0e-4,false," ")
\endcode
Groupsets segregate the code into pieces arranged by the number of groups
it contains. A great deal of care must be taken with intergroupset transfer
since the order in which the groupsets are executed determine what information
will be available to them.
\ingroup LuaNPT*/
/**Create a groupset.
\param SolverIndex int Handle to the solver for which the set is to be created.
##_
Example:
\code
gs0 = chiNPTCreateGroupset(phys1)
\endcode
\ingroup LuaLBSGroupsets
*/
int CHI_LUA::chiNPTCreateGroupset(int SolverIndex)
{return;} 
/**Create a group.
\param SolverIndex int Handle to the solver for which the group
is to be created.
##_
Example:
\code
grp[g] = chiNPTCreateGroup(phys1)
\endcode
\ingroup LuaLBSGroupsets
*/
int CHI_LUA::chiNPTCreateGroup(int SolverIndex)
{return;} 
/**Adds a block of groups to a groupset.
\param SolverIndex int Handle to the solver for which the group
is to be created.
\param GroupsetIndex int Handle to the groupset to which the group is
 to be added.
\param FromIndex int From which group.
\param ToIndex int To which group.
##_
Example:
\code
grp = {}
for g=1,num_groups do
    grp[g] = chiNPTCreateGroup(phys1)
end
chiNPTGroupsetAddGroups(phys1,cur_gs,0,15)
\endcode
\ingroup LuaLBSGroupsets
*/
int CHI_LUA::chiNPTGroupsetAddGroups(int SolverIndex, int GroupsetIndex, int FromIndex, int ToIndex)
{return;} 
/**Sets the product quadrature used for the groupset
\param SolverIndex int Handle to the solver for which the group
is to be created.
\param GroupsetIndex int Handle to the groupset to which the group is
 to be added.
\param QuadratureIndex int Handle to the quadrature to be set for this
 groupset.
##_
Example:
\code
pquad0 = chiCreateProductQuadrature(GAUSS_LEGENDRE_CHEBYSHEV,2, 2)
chiNPTGroupsetSetQuadrature(phys1,cur_gs,pquad0)
\endcode
\ingroup LuaLBSGroupsets
*/
int CHI_LUA::chiNPTGroupsetSetQuadrature(int SolverIndex, int GroupsetIndex, int QuadratureIndex)
{return;} 
/**Sets the angle aggregation divisions
\param SolverIndex int Handle to the solver for which the group
is to be created.
\param GroupsetIndex int Handle to the groupset to which the group is
 to be added.
\param NumDiv int Number of divisions to use for the angle aggregation.
Note: by default polar aggregation will combine all polar angles in a hemisphere
 for a given azimuthal angleset. Therefore if there are 24 polar angles and
 4 azimuthal angles the default polar aggregation will create 8 anglesets
 (2 per quadrant to allow top and bottom hemisphere) and each angleset will have the
 12 polar angles associated with a hemisphere. When the number of divisions is
 greater than 1 then the polar angles will be split into divisions. For example
 if the number of divisions is 2 then more angleset will be created, this time
 having 6 polar angles per angleset.
##_
Example:
\code
chiNPTGroupsetSetAngleAggDiv(phys1,cur_gs,1)
\endcode
\ingroup LuaLBSGroupsets
*/
int CHI_LUA::chiNPTGroupsetSetAngleAggDiv(int SolverIndex, int GroupsetIndex, int NumDiv)
{return;} 
/**Sets the number of group-subsets to use for groupset. Default 1.
\param SolverIndex int Handle to the solver for which the group
is to be created.
\param GroupsetIndex int Index to the groupset to which this function should
                         apply
\param NumDiv int Number of divisions of the groupset to use.
##_
Example:
\code
chiNPTGroupsetSetGroupSubsets(phys1,cur_gs,1)
\endcode
\ingroup LuaLBSGroupsets
*/
int CHI_LUA::chiNPTGroupsetSetGroupSubsets(int SolverIndex, int GroupsetIndex, int NumDiv)
{return;} 
/**Sets the number of group-subsets to use for groupset. Default 1.
\param SolverIndex int Handle to the solver for which the group
is to be created.
\param GroupsetIndex int Index to the groupset to which this function should
                         apply
\param IterativeMethod int Iteritve method identifier.
##_
### IterativeMethod
NPT_CLASSICRICHARDSON\n
Standard source iteration.\n\n
NPT_GMRES\n
Generalized Minimal Residual formulation for iterations.\n\n
Example:
\code
chiNPTGroupsetSetIterativeMethod(phys1,cur_gs,NPT_CLASSICRICHARDSON)
chiNPTGroupsetSetIterativeMethod(phys1,cur_gs,NPT_GMRES)
\endcode
\ingroup LuaLBSGroupsets
*/
int CHI_LUA::chiNPTGroupsetSetIterativeMethod(int SolverIndex, int GroupsetIndex, int IterativeMethod)
{return;} 
/**Sets the residual tolerance for the iterative method of the groupset.
 *
\param SolverIndex int Handle to the solver for which the group
is to be created.
\param GroupsetIndex int Index to the groupset to which this function should
                         apply
\param ResidualTol float residual tolerance (default 1.0e-6)
Note this tolerance also gets used for classic-richardson pointwise convergence
tolerance.
##_
Example:
\code
chiNPTGroupsetSetResidualTolerance(phys1,cur_gs,1.0e-4)
\endcode
\ingroup LuaLBSGroupsets
*/
int CHI_LUA::chiNPTGroupsetSetResidualTolerance(int SolverIndex, int GroupsetIndex, float ResidualTol)
{return;} 
/**Sets the maximum number of iterations for the groupset iterative method.
\param SolverIndex int Handle to the solver for which the group
is to be created.
\param GroupsetIndex int Index to the groupset to which this function should
                         apply
\param Numiter int Maximum number of iterations. Default 1000.
##_
Example:
\code
chiNPTGroupsetSetMaxIterations(phys1,cur_gs,200)
\endcode
\ingroup LuaLBSGroupsets
*/
int CHI_LUA::chiNPTGroupsetSetMaxIterations(int SolverIndex, int GroupsetIndex, int Numiter)
{return;} 
/**Sets the restart interval for GMRES if applied to the groupset.
\param SolverIndex int Handle to the solver for which the group
is to be created.
\param GroupsetIndex int Index to the groupset to which this function should
                         apply
\param Intvl int Interval to use for GMRES restarts. Default 30.
##_
Example:
\code
chiNPTGroupsetSetGMRESRestartIntvl(phys1,cur_gs,15)
\endcode
\ingroup LuaLBSGroupsets
*/
int CHI_LUA::chiNPTGroupsetSetGMRESRestartIntvl(int SolverIndex, int GroupsetIndex, int Intvl)
{return;} 
/**Sets the Within-Group Diffusion Synthetic Acceleration parameters
 * for this groupset. If this call is being made then it is assumed
 * WGDSA is being applied.
 *
\param SolverIndex int Handle to the solver for which the group
is to be created.
\param GroupsetIndex int Index to the groupset to which this function should
                         apply
\param MaxIters int Maximum amount of iterations to use for WGDSA solvers.
                    Default 30.
\param ResTol float Residual tolerance to use for the WGDSA solve.
\param Verbose bool Optional flag indicating verbose output of WGDSA.
                    Default false.
\param PETSCString char Optional. Options string to be inserted
                        during initialization.
##_
Example:
\code
petsc_options =                  " -pc_hypre_boomeramg_strong_threshold 0.8"
petsc_options = petsc_options .. " -pc_hypre_boomeramg_max_levels 25"
chiNPTGroupsetSetWGDSA(phys1,cur_gs,30,1.0e-4,false,petsc_options)
\endcode
\ingroup LuaLBSGroupsets
*/
int CHI_LUA::chiNPTGroupsetSetWGDSA(int SolverIndex, int GroupsetIndex, int MaxIters, float ResTol, bool Verbose, char PETSCString)
{return;} 
/**Sets the Two-Grid Diffusion Synthetic Acceleration parameters
 * for this groupset. If this call is being made then it is assumed
 * TGDSA is being applied.
 *
\param SolverIndex int Handle to the solver for which the group
is to be created.
\param GroupsetIndex int Index to the groupset to which this function should
                         apply
\param MaxIters int Maximum amount of iterations to use for TGDSA solvers.
                    Default 30.
\param ResTol float Residual tolerance to use for the TGDSA solve.
\param Verbose bool Optional flag indicating verbose output of TGDSA.
                    Default false.
\param PETSCString char Optional. Options string to be inserted
                        during initialization.
##_
Example:
\code
petsc_options =                  " -pc_hypre_boomeramg_strong_threshold 0.8"
petsc_options = petsc_options .. " -pc_hypre_boomeramg_max_levels 25"
chiNPTGroupsetSetTGDSA(phys1,cur_gs,30,1.0e-4,false,petsc_options)
\endcode
\ingroup LuaLBSGroupsets
*/
int CHI_LUA::chiNPTGroupsetSetTGDSA(int SolverIndex, int GroupsetIndex, int MaxIters, float ResTol, bool Verbose, char PETSCString)
{return;} 
/**Executes the NPT solver.
\param SolverIndex int Handle to the solver.
 \ingroup LuaNPT
 */
int CHI_LUA::chiNPTExecute(int SolverIndex)
{return;} 